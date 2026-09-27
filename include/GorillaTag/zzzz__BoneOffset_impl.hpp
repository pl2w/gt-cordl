#pragma once
// IWYU pragma private; include "GorillaTag/BoneOffset.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "GorillaTag/zzzz__BoneOffset_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EBone_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::BoneOffset.get_pos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::BoneOffset::*)()>(&::GorillaTag::BoneOffset::get_pos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d2088c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_pos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset.get_rot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GorillaTag::BoneOffset::*)()>(&::GorillaTag::BoneOffset::get_rot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d20898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_rot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset.get_scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaTag::BoneOffset::*)()>(&::GorillaTag::BoneOffset::get_scale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d208f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d208fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone, ::GorillaTag::XformOffset)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d2099c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d209f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d20b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d20cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::BoneOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::BoneOffset::*)(::GlobalNamespace::GTHardCodedBones_EBone, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::BoneOffset::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d20e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::BoneOffset::setStaticF_Identity(::GorillaTag::BoneOffset  value)  {
::cordl_internals::setStaticField<::GorillaTag::BoneOffset, "Identity", ::GorillaTag::BoneOffset>(std::forward<::GorillaTag::BoneOffset>(value));
}
inline ::GorillaTag::BoneOffset GorillaTag::BoneOffset::getStaticF_Identity()  {
return ::cordl_internals::getStaticField<::GorillaTag::BoneOffset, "Identity", ::GorillaTag::BoneOffset>();
}
inline ::UnityEngine::Vector3 GorillaTag::BoneOffset::get_pos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_pos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion GorillaTag::BoneOffset::get_rot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_rot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GorillaTag::BoneOffset::get_scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {"get_scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::GorillaTag::XformOffset  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone, offset);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone, pos, rot);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rotAngles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone, pos, rotAngles);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone, pos, rot, scale);
}
inline void GorillaTag::BoneOffset::_ctor(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rotAngles, ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::BoneOffset>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bone, pos, rotAngles, scale);
}
// Ctor Parameters [CppParam { name: "bone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::BoneOffset::BoneOffset(::GlobalNamespace::GTHardCodedBones_SturdyEBone  bone, ::GorillaTag::XformOffset  offset) noexcept  {
this->bone = bone;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GorillaTag::BoneOffset::BoneOffset()   {
}
