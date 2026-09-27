#pragma once
// IWYU pragma private; include "GlobalNamespace/HierarchyFlattenerRemoveXform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HierarchyFlattenerRemoveXform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerRemoveXform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerRemoveXform::*)()>(&::GlobalNamespace::HierarchyFlattenerRemoveXform::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x567b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerRemoveXform._DoIt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerRemoveXform::*)()>(&::GlobalNamespace::HierarchyFlattenerRemoveXform::_DoIt)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x567b0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {"_DoIt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HierarchyFlattenerRemoveXform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HierarchyFlattenerRemoveXform::*)()>(&::GlobalNamespace::HierarchyFlattenerRemoveXform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567b27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HierarchyFlattenerRemoveXform::__cordl_internal_get__didIt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didIt;
}
constexpr bool const& GlobalNamespace::HierarchyFlattenerRemoveXform::__cordl_internal_get__didIt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____didIt;
}
constexpr void GlobalNamespace::HierarchyFlattenerRemoveXform::__cordl_internal_set__didIt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____didIt = value;
}
inline void GlobalNamespace::HierarchyFlattenerRemoveXform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HierarchyFlattenerRemoveXform::_DoIt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {"_DoIt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HierarchyFlattenerRemoveXform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HierarchyFlattenerRemoveXform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HierarchyFlattenerRemoveXform* GlobalNamespace::HierarchyFlattenerRemoveXform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HierarchyFlattenerRemoveXform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HierarchyFlattenerRemoveXform::HierarchyFlattenerRemoveXform()   {
}
