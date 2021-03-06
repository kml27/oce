// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Pcurve_HeaderFile
#define _StepGeom_Pcurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_Pcurve.hxx>

#include <Handle_StepGeom_Surface.hxx>
#include <Handle_StepRepr_DefinitionalRepresentation.hxx>
#include <StepGeom_Curve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Surface;
class StepRepr_DefinitionalRepresentation;
class TCollection_HAsciiString;



class StepGeom_Pcurve : public StepGeom_Curve
{

public:

  
  //! Returns a Pcurve
  Standard_EXPORT StepGeom_Pcurve();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Surface)& aBasisSurface, const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve) ;
  
  Standard_EXPORT   void SetBasisSurface (const Handle(StepGeom_Surface)& aBasisSurface) ;
  
  Standard_EXPORT   Handle(StepGeom_Surface) BasisSurface()  const;
  
  Standard_EXPORT   void SetReferenceToCurve (const Handle(StepRepr_DefinitionalRepresentation)& aReferenceToCurve) ;
  
  Standard_EXPORT   Handle(StepRepr_DefinitionalRepresentation) ReferenceToCurve()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Pcurve)

protected:




private: 


  Handle(StepGeom_Surface) basisSurface;
  Handle(StepRepr_DefinitionalRepresentation) referenceToCurve;


};







#endif // _StepGeom_Pcurve_HeaderFile
