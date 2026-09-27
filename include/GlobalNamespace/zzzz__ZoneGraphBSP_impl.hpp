#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneGraphBSP.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneGraphBSP_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPTree_def.hpp"
#include "GlobalNamespace/zzzz__ZoneDef_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ZoneGraphBSP> (*)()>(&::GlobalNamespace::ZoneGraphBSP::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b4a5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ZoneGraphBSP*)>(&::GlobalNamespace::ZoneGraphBSP::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b4a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ZoneGraphBSP*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b4a654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.Preprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::Preprocess)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b4a754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"Preprocess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.CompileBSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::CompileBSP)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b4a8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"CompileBSP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.FindZoneAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ZoneDef> (::GlobalNamespace::ZoneGraphBSP::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ZoneGraphBSP::FindZoneAtPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4420c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"FindZoneAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.IsPointInAnyZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneGraphBSP::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ZoneGraphBSP::IsPointInAnyZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b4aa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"IsPointInAnyZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.HasCompiledTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::HasCompiledTree)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b4445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"HasCompiledTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP.GetBSPTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SerializableBSPTree* (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::GetBSPTree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"GetBSPTree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneGraphBSP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneGraphBSP::*)()>(&::GlobalNamespace::ZoneGraphBSP::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4aae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SerializableBSPTree*& GlobalNamespace::ZoneGraphBSP::__cordl_internal_get_bspTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bspTree;
}
constexpr ::GlobalNamespace::SerializableBSPTree* const& GlobalNamespace::ZoneGraphBSP::__cordl_internal_get_bspTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bspTree;
}
constexpr void GlobalNamespace::ZoneGraphBSP::__cordl_internal_set_bspTree(::GlobalNamespace::SerializableBSPTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bspTree = value;
}
inline void GlobalNamespace::ZoneGraphBSP::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ZoneGraphBSP>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ZoneGraphBSP>, "<Instance>k__BackingField", ::GlobalNamespace::ZoneGraphBSP*>(std::forward<::UnityW<::GlobalNamespace::ZoneGraphBSP>>(value));
}
inline ::UnityW<::GlobalNamespace::ZoneGraphBSP> GlobalNamespace::ZoneGraphBSP::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ZoneGraphBSP>, "<Instance>k__BackingField", ::GlobalNamespace::ZoneGraphBSP*>();
}
inline ::UnityW<::GlobalNamespace::ZoneGraphBSP> GlobalNamespace::ZoneGraphBSP::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ZoneGraphBSP>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ZoneGraphBSP::set_Instance(::GlobalNamespace::ZoneGraphBSP*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ZoneGraphBSP*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::ZoneGraphBSP::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneGraphBSP::Preprocess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"Preprocess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneGraphBSP::CompileBSP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"CompileBSP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ZoneDef> GlobalNamespace::ZoneGraphBSP::FindZoneAtPoint(::UnityEngine::Vector3  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"FindZoneAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ZoneDef>>(this, ___internal_method, worldPoint);
}
inline bool GlobalNamespace::ZoneGraphBSP::IsPointInAnyZone(::UnityEngine::Vector3  worldPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"IsPointInAnyZone", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPoint);
}
inline bool GlobalNamespace::ZoneGraphBSP::HasCompiledTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"HasCompiledTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::SerializableBSPTree* GlobalNamespace::ZoneGraphBSP::GetBSPTree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {"GetBSPTree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SerializableBSPTree*>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneGraphBSP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneGraphBSP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneGraphBSP* GlobalNamespace::ZoneGraphBSP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneGraphBSP*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneGraphBSP::ZoneGraphBSP()   {
}
