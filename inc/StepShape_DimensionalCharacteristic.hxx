// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_DimensionalCharacteristic_HeaderFile
#define _StepShape_DimensionalCharacteristic_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepShape_DimensionalLocation_HeaderFile
#include <Handle_StepShape_DimensionalLocation.hxx>
#endif
#ifndef _Handle_StepShape_DimensionalSize_HeaderFile
#include <Handle_StepShape_DimensionalSize.hxx>
#endif
class Standard_Transient;
class StepShape_DimensionalLocation;
class StepShape_DimensionalSize;


//! Representation of STEP SELECT type DimensionalCharacteristic <br>
class StepShape_DimensionalCharacteristic  : public StepData_SelectType {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_DimensionalCharacteristic();
  //! Recognizes a kind of DimensionalCharacteristic select type <br>
//!          1 -> DimensionalLocation from StepShape <br>
//!          2 -> DimensionalSize from StepShape <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as DimensionalLocation (or Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_DimensionalLocation DimensionalLocation() const;
  //! Returns Value as DimensionalSize (or Null if another type) <br>
  Standard_EXPORT     Handle_StepShape_DimensionalSize DimensionalSize() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif