#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyFlattenerReparentXform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HierarchyFlattenerReparentXform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerReparentXform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerReparentXform::*)()>(&::GlobalNamespace::HierarchyFlattenerReparentXform::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x567b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerReparentXform.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerReparentXform::*)()>(&::GlobalNamespace::HierarchyFlattenerReparentXform::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567b364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerReparentXform._DoIt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerReparentXform::*)()>(&::GlobalNamespace::HierarchyFlattenerReparentXform::_DoIt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x567b2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"_DoIt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerReparentXform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerReparentXform::*)()>(&::GlobalNamespace::HierarchyFlattenerReparentXform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_get_newParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_get_newParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newParent;
}
constexpr void GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_set_newParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newParent = value;
}
constexpr bool& GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_get__didIt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didIt;
}
constexpr bool const& GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_get__didIt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didIt;
}
constexpr void GlobalNamespace::HierarchyFlattenerReparentXform::__cordl_internal_set__didIt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____didIt = value;
}
inline void GlobalNamespace::HierarchyFlattenerReparentXform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HierarchyFlattenerReparentXform::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HierarchyFlattenerReparentXform::_DoIt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {"_DoIt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HierarchyFlattenerReparentXform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerReparentXform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HierarchyFlattenerReparentXform* GlobalNamespace::HierarchyFlattenerReparentXform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HierarchyFlattenerReparentXform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyFlattenerReparentXform::HierarchyFlattenerReparentXform()   {
}
