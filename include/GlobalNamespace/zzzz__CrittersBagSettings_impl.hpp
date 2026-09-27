#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBagSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersBagSettings_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersBagSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBagSettings::*)()>(&::GlobalNamespace::CrittersBagSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55fc670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBagSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBagSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBagSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBagSettings::*)()>(&::GlobalNamespace::CrittersBagSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fc75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBagSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachableCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachableCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachableCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachableCollider;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_attachableCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachableCollider = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_dropCube()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropCube;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_dropCube() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropCube;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_dropCube(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropCube = value;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_anchorLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_anchorLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorLocation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachDisableColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachDisableColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachDisableColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachDisableColliders;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_attachDisableColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachDisableColliders = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_attachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_attachSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_detachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_detachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_detachSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detachSound = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_blockAttachTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockAttachTypes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>* const& GlobalNamespace::CrittersBagSettings::__cordl_internal_get_blockAttachTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockAttachTypes;
}
constexpr void GlobalNamespace::CrittersBagSettings::__cordl_internal_set_blockAttachTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockAttachTypes = value;
}
inline void GlobalNamespace::CrittersBagSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBagSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersBagSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBagSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersBagSettings* GlobalNamespace::CrittersBagSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersBagSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersBagSettings::CrittersBagSettings()   {
}
