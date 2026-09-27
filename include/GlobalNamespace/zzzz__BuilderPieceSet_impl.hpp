#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceSet.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_BuilderPieceCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_BuilderPieceCategory_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet.get_SetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderPieceSet::*)()>(&::GlobalNamespace::BuilderPieceSet::get_SetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d1404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"get_SetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet.GetIntIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPieceSet::*)()>(&::GlobalNamespace::BuilderPieceSet::GetIntIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57be6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"GetIntIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet.GetScheduleDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::BuilderPieceSet::*)()>(&::GlobalNamespace::BuilderPieceSet::GetScheduleDateTime)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x57d140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"GetScheduleDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceSet::*)()>(&::GlobalNamespace::BuilderPieceSet::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57d1564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_setName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setName;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_setName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setName;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_setName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setName = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_displayModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayModel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_displayModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayModel;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_displayModel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayModel = value;
}
constexpr bool& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_isLocalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalized;
}
constexpr bool const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_isLocalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalized;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_isLocalized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocalized = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_setLocName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLocName;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_setLocName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setLocName;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_setLocName(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setLocName = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_playfabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_playfabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabID;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_playfabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabID = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_materialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_materialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_materialId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialId = value;
}
constexpr bool& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_isScheduled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScheduled;
}
constexpr bool const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_isScheduled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isScheduled;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_isScheduled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isScheduled = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_scheduledDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledDate;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_scheduledDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledDate;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_scheduledDate(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledDate = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_subsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>* const& GlobalNamespace::BuilderPieceSet::__cordl_internal_get_subsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsets;
}
constexpr void GlobalNamespace::BuilderPieceSet::__cordl_internal_set_subsets(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsets = value;
}
inline ::StringW GlobalNamespace::BuilderPieceSet::get_SetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"get_SetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderPieceSet::GetIntIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"GetIntIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::DateTime GlobalNamespace::BuilderPieceSet::GetScheduleDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {"GetScheduleDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceSet* GlobalNamespace::BuilderPieceSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceSet::BuilderPieceSet()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::*)()>(&::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57d15cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::*)(::StringW, ::StringW, int32_t, ::StringW)>(&::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57d16ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup.GetDisplayGroupIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::*)()>(&::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::GetDisplayGroupIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57d1788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {"GetDisplayGroupIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_pieceSubsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceSubsets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>* const& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_pieceSubsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceSubsets;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_set_pieceSubsets(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceSubsets = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_defaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_defaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_set_defaultMaterial(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaterial = value;
}
constexpr int32_t& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_setID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr int32_t const& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_setID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setID;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_set_setID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setID = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_uniqueGroupID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueGroupID;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_get_uniqueGroupID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueGroupID;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::__cordl_internal_set_uniqueGroupID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueGroupID = value;
}
inline void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::_ctor(::StringW  groupName, ::StringW  material, int32_t  inSetID, ::StringW  groupID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupName, material, inSetID, groupID);
}
inline int32_t GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::GetDisplayGroupIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(),
                        {"GetDisplayGroupIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>());
}
inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::New_ctor(::StringW  groupName, ::StringW  material, int32_t  inSetID, ::StringW  groupID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>(groupName, material, inSetID, groupID));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup::BuilderPieceSet_BuilderDisplayGroup()   {
}
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset.GetShelfButtonName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::*)()>(&::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::GetShelfButtonName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d15bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>(),
                        {"GetShelfButtonName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::*)()>(&::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d15c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_shelfButtonName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfButtonName;
}
constexpr ::StringW const& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_shelfButtonName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfButtonName;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_set_shelfButtonName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfButtonName = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_localizedShelfButtonName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedShelfButtonName;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_localizedShelfButtonName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedShelfButtonName;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_set_localizedShelfButtonName(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizedShelfButtonName = value;
}
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_pieceCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceCategory;
}
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_pieceCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceCategory;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_set_pieceCategory(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceCategory = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_pieceInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceInfos;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>* const& GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_get_pieceInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceInfos;
}
constexpr void GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::__cordl_internal_set_pieceInfos(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_PieceInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceInfos = value;
}
inline ::StringW GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::GetShelfButtonName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>(),
                        {"GetShelfButtonName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset* GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceSet_BuilderPieceSubset::BuilderPieceSet_BuilderPieceSubset()   {
}
