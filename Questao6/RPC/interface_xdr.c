/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "interface.h"

bool_t
xdr_data (XDR *xdrs, data *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->nome, sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->nivel, sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->sal_bruto))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->n_dependentes))
		 return FALSE;
	return TRUE;
}
