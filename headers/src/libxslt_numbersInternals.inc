// CVS-REV:libxslt/libxslt/numbersInternals.h:1.9:
{
  ------------------------------------------------------------------------------
  Translated into pascal with help of h2pas utility from the FreePascal project.
  Uwe Fechner <ufechner@4commerce.de> - 4commerce technologies AG
  Petr Kozelka <pkozelka@email.cz>
  ------------------------------------------------------------------------------
}
(*
 * numbers.h: Implementation of the XSLT number functions
 *
 * See Copyright for the status of this software.
 *
 * daniel@veillard.com
 * Bjorn Reese <breese@users.sourceforge.net>
 *)

(**
 * xsltNumberData:
 *
 * This data structure is just a wrapper to pass xsl: number data in.
 *)
type
  xsltNumberDataPtr = ^xsltNumberData;
  xsltNumberData = record
    level: PxmlChar;
    count: PxmlChar;
    from: PxmlChar;
    value: PxmlChar;
    format: PxmlChar;
    has_format: Longint;
    digitsPerGroup: Longint;
    groupingCharacter: xmlChar;
    doc: xmlDocPtr;
    node: xmlNodePtr;
  end;

  (**
   * xsltFormatNumberInfo,:
   *
   * This data structure lists the various parameters needed to format numbers.
   *)
  xsltFormatNumberInfoPtr = ^xsltFormatNumberInfo;
  xsltFormatNumberInfo = record
    integer_digits: Longint;                     { Number of '0' in integer part  }
