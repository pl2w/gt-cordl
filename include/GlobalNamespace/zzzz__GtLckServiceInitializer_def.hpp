#pragma once
// IWYU pragma private; include "GlobalNamespace/GtLckServiceInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GtLckServiceInitializer)
namespace GlobalNamespace {
class GtLckServiceInitializer___c;
}
namespace Liv::Lck::DependencyInjection {
class LckDiContainer;
}
namespace Liv::Lck {
class LckQualityConfig;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GtLckServiceInitializer;
}
namespace GlobalNamespace {
class GtLckServiceInitializer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GtLckServiceInitializer*);
MARK_REF_T(::GlobalNamespace::GtLckServiceInitializer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtLckServiceInitializer*, "", "GtLckServiceInitializer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtLckServiceInitializer___c*, "", "GtLckServiceInitializer/<>c");
// [DefaultExecutionOrder(-950)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GtLckServiceInitializer
class CORDL_TYPE GtLckServiceInitializer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::GtLckServiceInitializer___c;

/// @brief Field _qualityConfig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualityConfig, put=__cordl_internal_set__qualityConfig)) ::UnityW<::Liv::Lck::LckQualityConfig>  _qualityConfig;

/// @brief Method Awake, addr 0x56c2000, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GtLckServiceInitializer* New_ctor() ;

constexpr ::UnityW<::Liv::Lck::LckQualityConfig> const& __cordl_internal_get__qualityConfig() const;

constexpr ::UnityW<::Liv::Lck::LckQualityConfig>& __cordl_internal_get__qualityConfig() ;

constexpr void __cordl_internal_set__qualityConfig(::UnityW<::Liv::Lck::LckQualityConfig>  value) ;

/// @brief Method .ctor, addr 0x56c219c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtLckServiceInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtLckServiceInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtLckServiceInitializer(GtLckServiceInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtLckServiceInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtLckServiceInitializer(GtLckServiceInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1008};

/// [Header("LCK Configuration")]
/// [Tooltip("Assign the LCK Quality Config ScriptableObject here.")]
/// [SerializeField]
/// @brief Field _qualityConfig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckQualityConfig>  ____qualityConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtLckServiceInitializer, ____qualityConfig) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtLckServiceInitializer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GtLckServiceInitializer/<>c
class CORDL_TYPE GtLckServiceInitializer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GtLckServiceInitializer___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  __9__1_0;

static inline ::GlobalNamespace::GtLckServiceInitializer___c* New_ctor() ;

/// @brief Method <Awake>b__1_0, addr 0x56c2214, size 0x90, virtual false, abstract: false, final false
inline void _Awake_b__1_0(::Liv::Lck::DependencyInjection::LckDiContainer*  container) ;

/// @brief Method .ctor, addr 0x56c220c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GtLckServiceInitializer___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::GlobalNamespace::GtLckServiceInitializer___c*  value) ;

static inline void setStaticF___9__1_0(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtLckServiceInitializer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtLckServiceInitializer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtLckServiceInitializer___c(GtLckServiceInitializer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtLckServiceInitializer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtLckServiceInitializer___c(GtLckServiceInitializer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GtLckServiceInitializer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
