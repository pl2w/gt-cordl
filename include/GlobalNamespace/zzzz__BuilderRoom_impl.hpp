#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRoom.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRoom_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRoom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRoom::*)()>(&::GlobalNamespace::BuilderRoom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d78b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableColliderRoots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableColliderRoots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableColliderRoots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableColliderRoots;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disableColliderRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableColliderRoots = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableRenderRoots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRenderRoots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableRenderRoots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableRenderRoots;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disableRenderRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableRenderRoots = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableGameObjectsForScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGameObjectsForScene;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableGameObjectsForScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGameObjectsForScene;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disableGameObjectsForScene(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGameObjectsForScene = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableObjectsForPersistent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectsForPersistent;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disableObjectsForPersistent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectsForPersistent;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disableObjectsForPersistent(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableObjectsForPersistent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disabledRenderersForPersistent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledRenderersForPersistent;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disabledRenderersForPersistent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledRenderersForPersistent;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disabledRenderersForPersistent(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabledRenderersForPersistent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::BuilderRoom::__cordl_internal_get_disabledCollidersForScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledCollidersForScene;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::BuilderRoom::__cordl_internal_get_disabledCollidersForScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledCollidersForScene;
}
constexpr void GlobalNamespace::BuilderRoom::__cordl_internal_set_disabledCollidersForScene(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabledCollidersForScene = value;
}
inline void GlobalNamespace::BuilderRoom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRoom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderRoom* GlobalNamespace::BuilderRoom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderRoom*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRoom::BuilderRoom()   {
}
