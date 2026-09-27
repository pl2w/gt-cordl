#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantableObject.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_AppliedColors_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_AppliedColors_def.hpp"
#include "GlobalNamespace/zzzz__PlantableObject_def.hpp"
#include "GlobalNamespace/zzzz__PlantablePoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5761640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::PlantableObject::OnSpawn)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57616f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AssureShaderStuff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::AssureShaderStuff)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5761f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AssureShaderStuff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.get_colorR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::get_colorR)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57621e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_colorR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.set_colorR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::UnityEngine::Color)>(&::GlobalNamespace::PlantableObject::set_colorR)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57621fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_colorR", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.get_colorG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::get_colorG)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5762210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_colorG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.set_colorG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::UnityEngine::Color)>(&::GlobalNamespace::PlantableObject::set_colorG)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5762224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_colorG", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.get_planted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::get_planted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5762238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_planted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.set_planted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(bool)>(&::GlobalNamespace::PlantableObject::set_planted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5762240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_planted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.SetPlanted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(bool)>(&::GlobalNamespace::PlantableObject::SetPlanted)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5762248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"SetPlanted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AddRed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::AddRed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57622cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddRed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AddGreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::AddGreen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddGreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AddBlue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::AddBlue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5762344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddBlue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AddBlack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::AddBlack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddBlack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.AddColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::GlobalNamespace::PlantableObject_AppliedColors)>(&::GlobalNamespace::PlantableObject::AddColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57622d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddColor", {}, {::i2c::type_of<::GlobalNamespace::PlantableObject_AppliedColors>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.ClearColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::ClearColors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x576237c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"ClearColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.CalculateOutputColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::CalculateOutputColor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x57623e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"CalculateOutputColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.UpdateDisplayedDippedColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::UpdateDisplayedDippedColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5762354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"UpdateDisplayedDippedColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.DropItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::DropItem)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57625f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5762a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::LateUpdateShared)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5762c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::PlantableObject::OnGrab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57630d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5763838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::PlantableObject::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57638b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject::*)()>(&::GlobalNamespace::PlantableObject::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5763d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlantablePoint>& GlobalNamespace::PlantableObject::__cordl_internal_get_point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point;
}
constexpr ::UnityW<::GlobalNamespace::PlantablePoint> const& GlobalNamespace::PlantableObject::__cordl_internal_get_point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_point(::UnityW<::GlobalNamespace::PlantablePoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point = value;
}
constexpr float_t& GlobalNamespace::PlantableObject::__cordl_internal_get_respawnAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAfterDuration;
}
constexpr float_t const& GlobalNamespace::PlantableObject::__cordl_internal_get_respawnAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAfterDuration;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_respawnAfterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnAfterDuration = value;
}
constexpr float_t& GlobalNamespace::PlantableObject::__cordl_internal_get_respawnAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtTimestamp;
}
constexpr float_t const& GlobalNamespace::PlantableObject::__cordl_internal_get_respawnAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtTimestamp;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_respawnAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnAtTimestamp = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::PlantableObject::__cordl_internal_get_flagRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::PlantableObject::__cordl_internal_get_flagRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagRenderer;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_flagRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagRenderer = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::PlantableObject::__cordl_internal_get_materialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::PlantableObject::__cordl_internal_get_materialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialPropertyBlock;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialPropertyBlock = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlantableObject::__cordl_internal_get__colorR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorR;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlantableObject::__cordl_internal_get__colorR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorR;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set__colorR(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorR = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlantableObject::__cordl_internal_get__colorG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorG;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlantableObject::__cordl_internal_get__colorG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorG;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set__colorG(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorG = value;
}
constexpr bool& GlobalNamespace::PlantableObject::__cordl_internal_get__planted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planted_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlantableObject::__cordl_internal_get__planted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planted_k__BackingField;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set__planted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____planted_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlantableObject::__cordl_internal_get_flagTip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagTip;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlantableObject::__cordl_internal_get_flagTip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagTip;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_flagTip(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagTip = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>& GlobalNamespace::PlantableObject::__cordl_internal_get_dippedColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dippedColors;
}
constexpr ::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors> const& GlobalNamespace::PlantableObject::__cordl_internal_get_dippedColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dippedColors;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_dippedColors(::ArrayW<::GlobalNamespace::PlantableObject_AppliedColors>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dippedColors = value;
}
constexpr int32_t& GlobalNamespace::PlantableObject::__cordl_internal_get_currentDipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDipIndex;
}
constexpr int32_t const& GlobalNamespace::PlantableObject::__cordl_internal_get_currentDipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDipIndex;
}
constexpr void GlobalNamespace::PlantableObject::__cordl_internal_set_currentDipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDipIndex = value;
}
inline void GlobalNamespace::PlantableObject::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::PlantableObject::AssureShaderStuff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AssureShaderStuff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::PlantableObject::get_colorR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_colorR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::set_colorR(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_colorR", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::PlantableObject::get_colorG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_colorG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::set_colorG(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_colorG", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlantableObject::get_planted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"get_planted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::set_planted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"set_planted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlantableObject::SetPlanted(bool  newPlanted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"SetPlanted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlanted);
}
inline void GlobalNamespace::PlantableObject::AddRed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddRed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::AddGreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddGreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::AddBlue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddBlue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::AddBlack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddBlack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::AddColor(::GlobalNamespace::PlantableObject_AppliedColors  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"AddColor", {}, {::i2c::type_of<::GlobalNamespace::PlantableObject_AppliedColors>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::PlantableObject::ClearColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"ClearColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::PlantableObject::CalculateOutputColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"CalculateOutputColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::UpdateDisplayedDippedColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {"UpdateDisplayedDippedColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::DropItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::PlantableObject::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlantableObject*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline void GlobalNamespace::PlantableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlantableObject* GlobalNamespace::PlantableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlantableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlantableObject::PlantableObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlantableObject___c__DisplayClass38_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject___c__DisplayClass38_0::*)()>(&::GlobalNamespace::PlantableObject___c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57639e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject___c__DisplayClass38_0._OnOwnershipTransferred_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject___c__DisplayClass38_0::*)()>(&::GlobalNamespace::PlantableObject___c__DisplayClass38_0::_OnOwnershipTransferred_b__0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5763e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {"<OnOwnershipTransferred>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlantableObject___c__DisplayClass38_0._OnOwnershipTransferred_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlantableObject___c__DisplayClass38_0::*)(::UnityEngine::Color)>(&::GlobalNamespace::PlantableObject___c__DisplayClass38_0::_OnOwnershipTransferred_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5763fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {"<OnOwnershipTransferred>b__1", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get_toPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get_toPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPlayer;
}
constexpr void GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_set_toPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::PlantableObject>& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlantableObject> const& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlantableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void GlobalNamespace::PlantableObject___c__DisplayClass38_0::__cordl_internal_set___9__1(::System::Action_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void GlobalNamespace::PlantableObject___c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject___c__DisplayClass38_0::_OnOwnershipTransferred_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {"<OnOwnershipTransferred>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlantableObject___c__DisplayClass38_0::_OnOwnershipTransferred_b__1(::UnityEngine::Color  color1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>(),
                        {"<OnOwnershipTransferred>b__1", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color1);
}
inline ::GlobalNamespace::PlantableObject___c__DisplayClass38_0* GlobalNamespace::PlantableObject___c__DisplayClass38_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlantableObject___c__DisplayClass38_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlantableObject___c__DisplayClass38_0::PlantableObject___c__DisplayClass38_0()   {
}
