#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiServiceRegistration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/DependencyInjection/zzzz__LckDiServiceRegistration_ServiceLifetime_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckDiServiceRegistration)
namespace GlobalNamespace {
struct LckDiServiceRegistration_ServiceLifetime;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckDiServiceRegistration;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckDiServiceRegistration*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckDiServiceRegistration*, "Liv.Lck.DependencyInjection", "LckDiServiceRegistration");
// Dependencies Liv.Lck.DependencyInjection.LckDiServiceRegistration::ServiceLifetime, System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiServiceRegistration
class CORDL_TYPE LckDiServiceRegistration : public ::System::Object {
public:
// Declarations
using ServiceLifetime = ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime;

 __declspec(property(get=get_Factory)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  Factory;

 __declspec(property(get=get_ForwardToServiceType)) ::System::Type*  ForwardToServiceType;

 __declspec(property(get=get_ImplementationType)) ::System::Type*  ImplementationType;

 __declspec(property(get=get_Instance, put=set_Instance)) ::System::Object*  Instance;

 __declspec(property(get=get_Lifetime)) ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  Lifetime;

 __declspec(property(get=get_ServiceType)) ::System::Type*  ServiceType;

/// @brief Field <Factory>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Factory_k__BackingField, put=__cordl_internal_set__Factory_k__BackingField)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  _Factory_k__BackingField;

/// @brief Field <ForwardToServiceType>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ForwardToServiceType_k__BackingField, put=__cordl_internal_set__ForwardToServiceType_k__BackingField)) ::System::Type*  _ForwardToServiceType_k__BackingField;

/// @brief Field <ImplementationType>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ImplementationType_k__BackingField, put=__cordl_internal_set__ImplementationType_k__BackingField)) ::System::Type*  _ImplementationType_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Instance_k__BackingField, put=__cordl_internal_set__Instance_k__BackingField)) ::System::Object*  _Instance_k__BackingField;

/// @brief Field <Lifetime>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Lifetime_k__BackingField, put=__cordl_internal_set__Lifetime_k__BackingField)) ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  _Lifetime_k__BackingField;

/// @brief Field <ServiceType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServiceType_k__BackingField, put=__cordl_internal_set__ServiceType_k__BackingField)) ::System::Type*  _ServiceType_k__BackingField;

static inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* New_ctor(::System::Type*  serviceType, ::System::Type*  forwardToServiceType) ;

static inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* New_ctor(::System::Type*  serviceType, ::System::Object*  instance) ;

static inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* New_ctor(::System::Type*  serviceType, ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  lifetime, ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  factory) ;

static inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* New_ctor(::System::Type*  serviceType, ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  lifetime, ::System::Type*  implementationType) ;

/// @brief Method SetInstance, addr 0x9d35684, size 0x18, virtual false, abstract: false, final false
inline void SetInstance(::System::Object*  instance) ;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>* const& __cordl_internal_get__Factory_k__BackingField() const;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*& __cordl_internal_get__Factory_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ForwardToServiceType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ForwardToServiceType_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ImplementationType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ImplementationType_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Instance_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Instance_k__BackingField() ;

constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime const& __cordl_internal_get__Lifetime_k__BackingField() const;

constexpr ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime& __cordl_internal_get__Lifetime_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ServiceType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ServiceType_k__BackingField() ;

constexpr void __cordl_internal_set__Factory_k__BackingField(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__ForwardToServiceType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__ImplementationType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Instance_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__Lifetime_k__BackingField(::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  value) ;

constexpr void __cordl_internal_set__ServiceType_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x9d35638, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  serviceType, ::System::Type*  forwardToServiceType) ;

/// @brief Method .ctor, addr 0x9d35598, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  serviceType, ::System::Object*  instance) ;

/// @brief Method .ctor, addr 0x9d355e4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  serviceType, ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  lifetime, ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  factory) ;

/// @brief Method .ctor, addr 0x9d35544, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  serviceType, ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  lifetime, ::System::Type*  implementationType) ;

/// [CompilerGenerated]
/// @brief Method get_Factory, addr 0x9d35534, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>* get_Factory() ;

/// [CompilerGenerated]
/// @brief Method get_ForwardToServiceType, addr 0x9d3553c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ForwardToServiceType() ;

/// [CompilerGenerated]
/// @brief Method get_ImplementationType, addr 0x9d3551c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ImplementationType() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9d35524, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_Lifetime, addr 0x9d35514, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime get_Lifetime() ;

/// [CompilerGenerated]
/// @brief Method get_ServiceType, addr 0x9d3550c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ServiceType() ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9d3552c, size 0x8, virtual false, abstract: false, final false
inline void set_Instance(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiServiceRegistration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiServiceRegistration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiServiceRegistration(LckDiServiceRegistration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiServiceRegistration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiServiceRegistration(LckDiServiceRegistration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24814};

/// [CompilerGenerated]
/// @brief Field <ServiceType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____ServiceType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Lifetime>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::LckDiServiceRegistration_ServiceLifetime  ____Lifetime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ImplementationType>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____ImplementationType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Instance>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____Instance_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Factory>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,::System::Object*>*  ____Factory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ForwardToServiceType>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Type*  ____ForwardToServiceType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____ServiceType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____Lifetime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____ImplementationType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____Instance_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____Factory_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration, ____ForwardToServiceType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DependencyInjection::LckDiServiceRegistration) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
