<?php
/**
 * Automatically generated by running "php schema.php misc".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )

DefineConstant(
  array(
    'name'   => "INF",
    'type'   => Double,
  ));

DefineConstant(
  array(
    'name'   => "NAN",
    'type'   => Double,
  ));


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => "connection_aborted",
    'desc'   => "Checks whether the client disconnected.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Returns 1 if client disconnected, 0 otherwise.",
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "connection_status",
    'desc'   => "Gets the connection status bitfield.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Returns the connection status bitfield, which can be used against the CONNECTION_XXX constants to determine the connection status.",
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "connection_timeout",
    'desc'   => "Determines whether the script timed out.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Returns 1 if the script timed out, 0 otherwise.",
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "constant",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns the value of the constant, or NULL if the constant is not defined.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "The constant name.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "define",
    'desc'   => "Defines a named constant at runtime.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "The name of the constant.",
      ),
      array(
        'name'   => "value",
        'type'   => Variant,
        'desc'   => "The value of the constant; only scalar and null values are allowed. Scalar values are integer, float, string or boolean values. It is possible to define resource constants, however it is not recommended and may cause unpredictable behavior.",
      ),
      array(
        'name'   => "case_insensitive",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "If set to TRUE, the constant will be defined case-insensitive. The default behavior is case-sensitive; i.e. CONSTANT and Constant represent different values.\n\nCase-insensitive constants are stored as lower-case.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "defined",
    'desc'   => "Checks whether the given constant exists and is defined.\n\nIf you want to see if a variable exists, use isset() as defined() only applies to constants. If you want to see if a function exists, use function_exists().",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE if the named constant given by name has been defined, FALSE otherwise.",
    ),
    'args'   => array(
      array(
        'name'   => "name",
        'type'   => String,
        'desc'   => "The constant name.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "die",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "status",
        'type'   => Variant,
        'value'  => "null_variant",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "exit",
    'desc'   => "Terminates execution of the script. Shutdown functions and object destructors will always be executed even if exit() is called.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "No value is returned.",
    ),
    'args'   => array(
      array(
        'name'   => "status",
        'type'   => Variant,
        'value'  => "null_variant",
        'desc'   => "If status is a string, this function prints the status just before exiting.\n\nIf status is an integer, that value will be used as the exit status and not printed. Exit statuses should be in the range 0 to 254, the exit status 255 is reserved by PHP and shall not be used. The status 0 is used to terminate the program successfully. PHP >= 4.2.0 does NOT print the status if it is an integer.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "eval",
    'desc'   => "Evaluates the string given in code_str as PHP code. Among other things, this can be useful for storing code in a database text field for later execution.\n\nThere are some factors to keep in mind when using eval(). Remember that the string passed must be valid PHP code, including things like terminating statements with a semicolon so the parser doesn't die on the line after the eval(), and properly escaping things in code_str. To mix HTML output and PHP code you can use a closing PHP tag to leave PHP mode.\n\nAlso remember that variables given values under eval() will retain these values in the main script afterwards.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "eval() returns NULL unless return is called in the evaluated code, in which case the value passed to return is returned. If there is a parse error in the evaluated code, eval() returns FALSE and execution of the following code continues normally. It is not possible to catch a parse error in eval() using set_error_handler().",
    ),
    'args'   => array(
      array(
        'name'   => "code_str",
        'type'   => String,
        'desc'   => "The code string to be evaluated. code_str does not have to contain PHP Opening tags.\n\nA return statement will immediately terminate the evaluation of the string .",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "get_browser",
    'desc'   => "Attempts to determine the capabilities of the user's browser, by looking up the browser's information in the browscap.ini file.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "The information is returned in an object or an array which will contain various data elements representing, for instance, the browser's major and minor version numbers and ID string; TRUE/FALSE values for features such as frames, JavaScript, and cookies; and so forth.\n\nThe cookies value simply means that the browser itself is capable of accepting cookies and does not mean the user has enabled the browser to accept cookies or not. The only way to test if cookies are accepted is to set one with setcookie(), reload, and check for the value.",
    ),
    'args'   => array(
      array(
        'name'   => "user_agent",
        'type'   => String,
        'value'  => "null_string",
        'desc'   => "The User Agent to be analyzed. By default, the value of HTTP User-Agent header is used; however, you can alter this (i.e., look up another browser's info) by passing this parameter.\n\nYou can bypass this parameter with a NULL value.",
      ),
      array(
        'name'   => "return_array",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "If set to TRUE, this function will return an array instead of an object.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "__halt_compiler",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "highlight_file",
    'desc'   => "Prints out or returns a syntax highlighted version of the code contained in filename using the colors defined in the built-in syntax highlighter for PHP.\n\nMany servers are configured to automatically highlight files with a phps extension. For example, example.phps when viewed will show the syntax highlighted source of the file. To enable this, add this line to the httpd.conf: AddType application/x-httpd-php-source .phps",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "If return is set to TRUE, returns the highlighted code as a string instead of printing it out. Otherwise, it will return TRUE on success, FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
        'desc'   => "Path to the PHP file to be highlighted.",
      ),
      array(
        'name'   => "ret",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "Set this parameter to TRUE to make this function return the highlighted code.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "show_source",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
      ),
      array(
        'name'   => "ret",
        'type'   => Boolean,
        'value'  => "false",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "highlight_string",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "If return is set to TRUE, returns the highlighted code as a string instead of printing it out. Otherwise, it will return TRUE on success, FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "str",
        'type'   => String,
        'desc'   => "The PHP code to be highlighted. This should include the opening tag.",
      ),
      array(
        'name'   => "ret",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "Set this parameter to TRUE to make this function return the highlighted code.",
      ),
    ),
    'taint_observer' => array(
      'set_mask'   => "TAINT_BIT_MUTATED",
      'clear_mask' => "TAINT_BIT_NONE",
    ),
  ));

DefineFunction(
  array(
    'name'   => "ignore_user_abort",
    'desc'   => "Sets whether a client disconnect should cause a script to be aborted.\n\nWhen running PHP as a command line script, and the script's tty goes away without the script being terminated then the script will die the next time it tries to write anything, unless value is set to TRUE",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Returns the previous setting, as an integer.",
    ),
    'args'   => array(
      array(
        'name'   => "setting",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "If set, this function will set the ignore_user_abort ini setting to the given value. If not, this function will only return the previous setting without changing it.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "pack",
    'desc'   => "Pack given arguments into binary string according to format.\n\nThe idea for this function was taken from Perl and all formatting codes work the same as in Perl. However, there are some formatting codes that are missing such as Perl's \"u\" format code.\n\nNote that the distinction between signed and unsigned values only affects the function unpack(), where as function pack() gives the same result for signed and unsigned format codes.\n\nAlso note that PHP internally stores integer values as signed values of a machine-dependent size. If you give it an unsigned integer value too large to be stored that way it is converted to a float which often yields an undesired result.",
    'flags'  =>  HasDocComment | VariableArguments,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns a binary string containing data.",
    ),
    'args'   => array(
      array(
        'name'   => "format",
        'type'   => String,
        'desc'   => "The format string consists of format codes followed by an optional repeater argument. The repeater argument can be either an integer value or * for repeating to the end of the input data. For a, A, h, H the repeat count specifies how many characters of one data argument are taken, for @ it is the absolute position where to put the next data, for everything else the repeat count specifies how many data arguments are consumed and packed into the resulting binary string.\n\nCurrently implemented formats are: pack() format characters Code Description a NUL-padded string A SPACE-padded string h Hex string, low nibble first H Hex string, high nibble first csigned char C unsigned char s signed short (always 16 bit, machine byte order) S unsigned short (always 16 bit, machine byte order) n unsigned short (always 16 bit, big endian byte order) v unsigned short (always 16 bit, little endian byte order) i signed integer (machine dependent size and byte order) I unsigned integer (machine dependent size and byte order) l signed long (always 32 bit, machine byte order) L unsigned long (always 32 bit, machine byte order) N unsigned long (always 32 bit, big endian byte order) V unsigned long (always 32 bit, little endian byte order) f float (machine dependent size and representation) d double (machine dependent size and representation) x NUL byte X Back up one byte @ NUL-fill to absolute position",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "php_check_syntax",
    'desc'   => "Performs a syntax (lint) check on the specified filename testing for scripting errors.\n\nThis is similar to using php -l from the commandline except that this function will execute (but not output) the checked filename.\n\nFor example, if a function is defined in filename, this defined function will be available to the file that executed php_check_syntax(), but output from filename will be suppressed.\n\nFor technical reasons, this function is deprecated and removed from PHP. Instead, use php -l somefile.php from the commandline.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE if the lint check passed, and FALSE if the link check failed or if filename cannot be opened.",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
        'desc'   => "The name of the file being checked.",
      ),
      array(
        'name'   => "error_message",
        'type'   => Variant | Reference,
        'value'  => "null",
        'desc'   => "If the error_message parameter is used, it will contain the error message generated by the syntax check. error_message is passed by reference.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "php_strip_whitespace",
    'desc'   => "Returns the PHP source code in filename with PHP comments and whitespace removed. This may be useful for determining the amount of actual code in your scripts compared with the amount of comments. This is similar to using php -w from the commandline.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The stripped source code will be returned on success, or an empty string on failure.\n\nThis function works as described as of PHP 5.0.1. Before this it would only return an empty string. For more information on this bug and its prior behavior, see bug report � #29606.",
    ),
    'args'   => array(
      array(
        'name'   => "filename",
        'type'   => String,
        'desc'   => "Path to the PHP file.",
      ),
    ),
    'taint_observer' => array(
      'set_mask'   => "TAINT_BIT_MUTATED",
      'clear_mask' => "TAINT_BIT_NONE",
    ),
  ));

DefineFunction(
  array(
    'name'   => "sleep",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Int64,
      'desc'   => "Returns zero on success, or FALSE on errors. If the call was interrupted by a signal, sleep() returns the number of seconds left to sleep.",
    ),
    'args'   => array(
      array(
        'name'   => "seconds",
        'type'   => Int32,
        'desc'   => "Halt time in seconds.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "usleep",
    'desc'   => "Delays program execution for the given number of micro seconds.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => null,
      'desc'   => "No value is returned.",
    ),
    'args'   => array(
      array(
        'name'   => "micro_seconds",
        'type'   => Int32,
        'desc'   => "Halt time in micro seconds. A micro second is one millionth of a second.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "time_nanosleep",
    'desc'   => "Delays program execution for the given number of seconds and nanoseconds.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns TRUE on success or FALSE on failure.\n\nIf the delay was interrupted by a signal, an associative array will be returned with the components: seconds - number of seconds remaining in the delay nanoseconds - number of nanoseconds remaining in the delay",
    ),
    'args'   => array(
      array(
        'name'   => "seconds",
        'type'   => Int32,
        'desc'   => "Must be a positive integer.",
      ),
      array(
        'name'   => "nanoseconds",
        'type'   => Int32,
        'desc'   => "Must be a positive integer less than 1 billion.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "time_sleep_until",
    'desc'   => "Makes the script sleep until the specified timestamp.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Boolean,
      'desc'   => "Returns TRUE on success or FALSE on failure.",
    ),
    'args'   => array(
      array(
        'name'   => "timestamp",
        'type'   => Double,
        'desc'   => "The timestamp when the script should wake.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "uniqid",
    'desc'   => "Gets a prefixed unique identifier based on the current time in microseconds.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "Returns the unique identifier, as a string.",
    ),
    'args'   => array(
      array(
        'name'   => "prefix",
        'type'   => String,
        'value'  => "null_string",
        'desc'   => "Can be useful, for instance, if you generate identifiers simultaneously on several hosts that might happen to generate the identifier at the same microsecond.\n\nWith an empty prefix, the returned string will be 13 characters long. If more_entropy is TRUE, it will be 23 characters.",
      ),
      array(
        'name'   => "more_entropy",
        'type'   => Boolean,
        'value'  => "false",
        'desc'   => "If set to TRUE, uniqid() will add additional entropy (using the combined linear congruential generator) at the end of the return value, which should make the results more unique.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "unpack",
    'desc'   => "Unpacks from a binary string into an array according to the given format.\n\nunpack() works slightly different from Perl as the unpacked data is stored in an associative array. To accomplish this you have to name the different format codes and separate them by a slash /.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "Returns an associative array containing unpacked elements of binary string.",
    ),
    'args'   => array(
      array(
        'name'   => "format",
        'type'   => String,
        'desc'   => "See pack() for an explanation of the format codes.",
      ),
      array(
        'name'   => "data",
        'type'   => String,
        'desc'   => "The packed data.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "sys_getloadavg",
    'desc'   => "Returns three samples representing the average system load (the number of processes in the system run queue) over the last 1, 5 and 15 minutes, respectively.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
      'desc'   => "Returns an array with three samples (last 1, 5 and 15 minutes).",
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "token_get_all",
    'desc'   => "token_get_all() parses the given source string into PHP language tokens using the Zend engine's lexical scanner.\n\nFor a list of parser tokens, see List of Parser Tokens, or use token_name() to translate a token value into its string representation.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => VariantMap,
      'desc'   => "An array of token identifiers. Each individual token identifier is either a single character (i.e.: ;, ., >, !, etc...), or a three element array containing the token index in element 0, the string content of the original token in element 1 and the line number in element 2.",
    ),
    'args'   => array(
      array(
        'name'   => "source",
        'type'   => String,
        'desc'   => "The PHP source to parse.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "token_name",
    'desc'   => "token_name() gets the symbolic name for a PHP token value.",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => String,
      'desc'   => "The symbolic name of the given token. The returned name returned matches the name of the matching token constant.",
    ),
    'args'   => array(
      array(
        'name'   => "token",
        'type'   => Int64,
        'desc'   => "The token value.",
      ),
    ),
    'taint_observer' => false,
  ));

DefineFunction(
  array(
    'name'   => "hphp_process_abort",
    'desc'   => "Causes the process to die immediately in an undefined way.",
    'flags'  => HasDocComment,
    'return' => array(
      'type'   => Variant,
      'desc'   => "No value is returned.",
    ),
    'args'  => array(
      array(
        'name'   => "magic",
        'type'   => Variant,
        'desc'   => "You shouldn't be calling this function if you don't know the magic value.",
      ),
    ),
    'taint_observer' => false,
  ));

///////////////////////////////////////////////////////////////////////////////
// Classes
//
// BeginClass
// array (
//   'name'   => name of the class
//   'desc'   => description of the class's purpose
//   'flags'  => attributes of the class, see base.php for possible values
//   'note'   => additional note about this class's schema
//   'parent' => parent class name, if any
//   'ifaces' => array of interfaces tihs class implements
//   'bases'  => extra internal and special base classes this class requires
//   'footer' => extra C++ inserted at end of class declaration
// )
//
// DefineConstant(..)
// DefineConstant(..)
// ...
// DefineFunction(..)
// DefineFunction(..)
// ...
// DefineProperty
// DefineProperty
//
// array (
//   'name'  => name of the property
//   'type'  => type of the property
//   'flags' => attributes of the property
//   'desc'  => description of the property
//   'note'  => additional note about this property's schema
// )
//
// EndClass()

