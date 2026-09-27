#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PathGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__EndType_impl.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_impl.hpp"
#include "Unity/Cinemachine/zzzz__PathGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__EndType_def.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PathGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PathGroup::*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::JoinType, ::Unity::Cinemachine::EndType)>(&::Unity::Cinemachine::PathGroup::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaefc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PathGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::PathGroup::__cordl_internal_get__inPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inPaths;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::PathGroup::__cordl_internal_get__inPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inPaths;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__inPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inPaths = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& Unity::Cinemachine::PathGroup::__cordl_internal_get__outPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outPath;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& Unity::Cinemachine::PathGroup::__cordl_internal_get__outPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outPath;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__outPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outPath = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& Unity::Cinemachine::PathGroup::__cordl_internal_get__outPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outPaths;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& Unity::Cinemachine::PathGroup::__cordl_internal_get__outPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outPaths;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__outPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outPaths = value;
}
constexpr ::Unity::Cinemachine::JoinType& Unity::Cinemachine::PathGroup::__cordl_internal_get__joinType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinType;
}
constexpr ::Unity::Cinemachine::JoinType const& Unity::Cinemachine::PathGroup::__cordl_internal_get__joinType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joinType;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__joinType(::Unity::Cinemachine::JoinType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joinType = value;
}
constexpr ::Unity::Cinemachine::EndType& Unity::Cinemachine::PathGroup::__cordl_internal_get__endType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endType;
}
constexpr ::Unity::Cinemachine::EndType const& Unity::Cinemachine::PathGroup::__cordl_internal_get__endType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endType;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__endType(::Unity::Cinemachine::EndType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endType = value;
}
constexpr bool& Unity::Cinemachine::PathGroup::__cordl_internal_get__pathsReversed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathsReversed;
}
constexpr bool const& Unity::Cinemachine::PathGroup::__cordl_internal_get__pathsReversed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathsReversed;
}
constexpr void Unity::Cinemachine::PathGroup::__cordl_internal_set__pathsReversed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pathsReversed = value;
}
inline void Unity::Cinemachine::PathGroup::_ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PathGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, joinType, endType);
}
inline ::Unity::Cinemachine::PathGroup* Unity::Cinemachine::PathGroup::New_ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PathGroup*>(paths, joinType, endType));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PathGroup::PathGroup()   {
}
