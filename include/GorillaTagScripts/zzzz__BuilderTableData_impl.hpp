#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableData::*)()>(&::GorillaTagScripts::BuilderTableData::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ba9a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableData::*)()>(&::GorillaTagScripts::BuilderTableData::Clear)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bb575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::BuilderTableData::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableData::__cordl_internal_get_numEdits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numEdits;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_numEdits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numEdits;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_numEdits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numEdits = value;
}
constexpr int32_t& GorillaTagScripts::BuilderTableData::__cordl_internal_get_numPieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPieces;
}
constexpr int32_t const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_numPieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPieces;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_numPieces(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numPieces = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_pieceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceType;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_pieceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceType;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_pieceType(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceType = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_pieceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceId;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_pieceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceId;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_pieceId(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceId = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_parentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentId;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_parentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentId;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_parentId(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentId = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_attachIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_attachIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_attachIndex(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_parentAttachIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAttachIndex;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_parentAttachIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAttachIndex;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_parentAttachIndex(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentAttachIndex = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_placement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placement;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_placement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placement;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_placement(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placement = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_materialType(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlapingPieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapingPieces;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlapingPieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapingPieces;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_overlapingPieces(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapingPieces = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlappedPieces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappedPieces;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlappedPieces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappedPieces;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_overlappedPieces(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlappedPieces = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlapInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInfo;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_overlapInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapInfo;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_overlapInfo(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapInfo = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GorillaTagScripts::BuilderTableData::__cordl_internal_get_timeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOffset;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GorillaTagScripts::BuilderTableData::__cordl_internal_get_timeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOffset;
}
constexpr void GorillaTagScripts::BuilderTableData::__cordl_internal_set_timeOffset(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOffset = value;
}
inline void GorillaTagScripts::BuilderTableData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderTableData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableData* GorillaTagScripts::BuilderTableData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTableData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTableData::BuilderTableData()   {
}
