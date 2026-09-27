#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticAttachInfo.hpp"
#include "GlobalNamespace/zzzz__StringEnum_1_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EBone_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::CosmeticAttachInfo.get_Identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::CosmeticAttachInfo (*)()>(&::GorillaTag::CosmeticSystem::CosmeticAttachInfo::get_Identity)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d46dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(),
                        {"get_Identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::CosmeticAttachInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticSystem::CosmeticAttachInfo::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide, ::GlobalNamespace::GTHardCodedBones_EBone, ::GorillaTag::XformOffset)>(&::GorillaTag::CosmeticSystem::CosmeticAttachInfo::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d46ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(), ::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GorillaTag::CosmeticSystem::CosmeticAttachInfo GorillaTag::CosmeticSystem::CosmeticAttachInfo::get_Identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(),
                        {"get_Identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(nullptr, ___internal_method);
}
inline void GorillaTag::CosmeticSystem::CosmeticAttachInfo::_ctor(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  selectSide, ::GlobalNamespace::GTHardCodedBones_EBone  parentBone, ::GorillaTag::XformOffset  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(), ::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, selectSide, parentBone, offset);
}
// Ctor Parameters [CppParam { name: "selectSide", ty: "::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticAttachInfo::CosmeticAttachInfo(::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>  selectSide, ::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone, ::GorillaTag::XformOffset  offset) noexcept  {
this->selectSide = selectSide;
this->parentBone = parentBone;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticAttachInfo::CosmeticAttachInfo()   {
}
