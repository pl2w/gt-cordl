#pragma once
// IWYU pragma private; include "GlobalNamespace/ParentedObjectStressTestMain.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ParentedObjectStressTestMain_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParentedObjectStressTestMain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParentedObjectStressTestMain::*)()>(&::GlobalNamespace::ParentedObjectStressTestMain::Start)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55e5f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentedObjectStressTestMain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParentedObjectStressTestMain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParentedObjectStressTestMain::*)()>(&::GlobalNamespace::ParentedObjectStressTestMain::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentedObjectStressTestMain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr void GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_set_Object(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_NumObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumObjects;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_NumObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumObjects;
}
constexpr void GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_set_NumObjects(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumObjects = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_Spacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spacing;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_get_Spacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Spacing;
}
constexpr void GlobalNamespace::ParentedObjectStressTestMain::__cordl_internal_set_Spacing(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Spacing = value;
}
inline void GlobalNamespace::ParentedObjectStressTestMain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentedObjectStressTestMain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParentedObjectStressTestMain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParentedObjectStressTestMain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParentedObjectStressTestMain* GlobalNamespace::ParentedObjectStressTestMain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParentedObjectStressTestMain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParentedObjectStressTestMain::ParentedObjectStressTestMain()   {
}
