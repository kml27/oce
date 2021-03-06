// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HSequenceOfDir_HeaderFile
#define _TColgp_HSequenceOfDir_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HSequenceOfDir.hxx>

#include <TColgp_SequenceOfDir.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Dir;
class TColgp_SequenceOfDir;



class TColgp_HSequenceOfDir : public MMgt_TShared
{

public:

  
    TColgp_HSequenceOfDir();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_Dir& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(TColgp_HSequenceOfDir)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const gp_Dir& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(TColgp_HSequenceOfDir)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const gp_Dir& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfDir)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const gp_Dir& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(TColgp_HSequenceOfDir)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfDir) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const gp_Dir& anItem) ;
  
  Standard_EXPORT  const  gp_Dir& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   gp_Dir& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  TColgp_SequenceOfDir& Sequence()  const;
  
      TColgp_SequenceOfDir& ChangeSequence() ;
  
  Standard_EXPORT   Handle(TColgp_HSequenceOfDir) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(TColgp_HSequenceOfDir)

protected:




private: 


  TColgp_SequenceOfDir mySequence;


};

#define Item gp_Dir
#define Item_hxx <gp_Dir.hxx>
#define TheSequence TColgp_SequenceOfDir
#define TheSequence_hxx <TColgp_SequenceOfDir.hxx>
#define TCollection_HSequence TColgp_HSequenceOfDir
#define TCollection_HSequence_hxx <TColgp_HSequenceOfDir.hxx>
#define Handle_TCollection_HSequence Handle_TColgp_HSequenceOfDir
#define TCollection_HSequence_Type_() TColgp_HSequenceOfDir_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(TColgp_HSequenceOfDir) ShallowCopy(const Handle(TColgp_HSequenceOfDir)& me) {
 return me->ShallowCopy();
}



#endif // _TColgp_HSequenceOfDir_HeaderFile
