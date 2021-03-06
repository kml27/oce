// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Profiler_HeaderFile
#define _GeomFill_Profiler_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TColGeom_SequenceOfCurve.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class StdFail_NotDone;
class Standard_DomainError;
class Geom_Curve;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;


//! Evaluation of the common BSplineProfile of a group
//! of curves  from Geom. All the curves will have the
//! same  degree,  the same knot-vector, so  the  same
//! number of poles.
class GeomFill_Profiler 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_Profiler();
  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~GeomFill_Profiler(){Delete() ; }
  
  Standard_EXPORT   void AddCurve (const Handle(Geom_Curve)& Curve) ;
  
  //! Converts all curves to BSplineCurves.
  //! Set them to the common profile.
  //! <PTol> is used to compare 2 knots.
  Standard_EXPORT virtual   void Perform (const Standard_Real PTol) ;
  
  //! Raises if not yet perform
  Standard_EXPORT   Standard_Integer Degree()  const;
  
      Standard_Boolean IsPeriodic()  const;
  
  //! Raises if not yet perform
  Standard_EXPORT   Standard_Integer NbPoles()  const;
  
  //! returns in <Poles> the  poles  of the BSplineCurve
  //! from index <Index> adjusting to the current profile.
  //! Raises if not yet perform
  //! Raises if <Index> not in the range [1,NbCurves]
  //! if  the  length  of  <Poles>  is  not  equal  to
  //! NbPoles().
  Standard_EXPORT   void Poles (const Standard_Integer Index, TColgp_Array1OfPnt& Poles)  const;
  
  //! returns in <Weights> the weights of the BSplineCurve
  //! from index <Index> adjusting to the current profile.
  //! Raises if not yet perform
  //! Raises if <Index> not in the range [1,NbCurves] or
  //! if  the  length  of  <Weights>  is  not  equal  to
  //! NbPoles().
  Standard_EXPORT   void Weights (const Standard_Integer Index, TColStd_Array1OfReal& Weights)  const;
  
  //! Raises if not yet perform
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  //! Raises if not yet perform
  //! Raises if  the lengthes of <Knots> and <Mults> are
  //! not equal to NbKnots().
  Standard_EXPORT   void KnotsAndMults (TColStd_Array1OfReal& Knots, TColStd_Array1OfInteger& Mults)  const;
  
     const  Handle(Geom_Curve)& Curve (const Standard_Integer Index)  const;




protected:



  TColGeom_SequenceOfCurve mySequence;
  Standard_Boolean myIsDone;
  Standard_Boolean myIsPeriodic;


private:





};


#include <GeomFill_Profiler.lxx>





#endif // _GeomFill_Profiler_HeaderFile
