#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBehaviors_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRBehaviorsBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRBehaviors_1)
namespace GlobalNamespace {
class GRAbilityBase;
}
namespace GlobalNamespace {
template<typename T>
class GRBehaviors_1_BehaviorData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GRBehaviors_1;
}
namespace GlobalNamespace {
template<typename T>
class GRBehaviors_1_BehaviorData;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GRBehaviors_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GRBehaviors_1_BehaviorData);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GRBehaviors_1, "", "GRBehaviors`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GRBehaviors_1_BehaviorData, "", "GRBehaviors`1/BehaviorData");
// Dependencies GRBehaviorsBase
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GRBehaviors`1<T>
class CORDL_TYPE GRBehaviors_1 : public ::GlobalNamespace::GRBehaviorsBase {
public:
// Declarations
using BehaviorData = ::GlobalNamespace::GRBehaviors_1_BehaviorData<T>;

/// @brief Field behaviorData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorData, put=__cordl_internal_set_behaviorData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*  behaviorData;

/// @brief Method AddBehavior, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddBehavior(T  behavior, ::GlobalNamespace::GRAbilityBase*  ability) ;

static inline ::GlobalNamespace::GRBehaviors_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>* const& __cordl_internal_get_behaviorData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*& __cordl_internal_get_behaviorData() ;

constexpr void __cordl_internal_set_behaviorData(::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBehaviors_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviors_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBehaviors_1(GRBehaviors_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviors_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBehaviors_1(GRBehaviors_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1929};

/// @brief Field behaviorData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*  ___behaviorData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GRBehaviors`1/BehaviorData<T>
class CORDL_TYPE GRBehaviors_1_BehaviorData : public ::System::Object {
public:
// Declarations
/// @brief Field ability, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ability, put=__cordl_internal_set_ability)) ::GlobalNamespace::GRAbilityBase*  ability;

/// @brief Field behavior, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavior, put=__cordl_internal_set_behavior)) T  behavior;

static inline ::GlobalNamespace::GRBehaviors_1_BehaviorData<T>* New_ctor() ;

constexpr ::GlobalNamespace::GRAbilityBase* const& __cordl_internal_get_ability() const;

constexpr ::GlobalNamespace::GRAbilityBase*& __cordl_internal_get_ability() ;

constexpr T const& __cordl_internal_get_behavior() const;

constexpr T& __cordl_internal_get_behavior() ;

constexpr void __cordl_internal_set_ability(::GlobalNamespace::GRAbilityBase*  value) ;

constexpr void __cordl_internal_set_behavior(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBehaviors_1_BehaviorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviors_1_BehaviorData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBehaviors_1_BehaviorData(GRBehaviors_1_BehaviorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviors_1_BehaviorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBehaviors_1_BehaviorData(GRBehaviors_1_BehaviorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1928};

/// @brief Field behavior, offset: 0x10, size: 0x8, def value: None
 T  ___behavior;

/// @brief Field ability, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityBase*  ___ability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
