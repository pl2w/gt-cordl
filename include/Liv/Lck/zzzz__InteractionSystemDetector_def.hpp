#pragma once
// IWYU pragma private; include "Liv/Lck/InteractionSystemDetector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InteractionSystemDetector)
namespace GlobalNamespace {
struct InteractionSystemDetector_InteractionSystem;
}
namespace Liv::Lck {
class InteractionSystemDetector___c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace Liv::Lck {
class InteractionSystemDetector;
}
namespace Liv::Lck {
class InteractionSystemDetector___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::InteractionSystemDetector*);
MARK_REF_T(::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::InteractionSystemDetector*, "Liv.Lck", "InteractionSystemDetector");
DEFINE_IL2CPP_CLASS(::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0*, "Liv.Lck", "InteractionSystemDetector/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.InteractionSystemDetector
class CORDL_TYPE InteractionSystemDetector : public ::System::Object {
public:
// Declarations
using InteractionSystem = ::GlobalNamespace::InteractionSystemDetector_InteractionSystem;

using __c__DisplayClass8_0 = ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0;

/// @brief Field _detectedSystems, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__detectedSystems, put=setStaticF__detectedSystems)) ::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*  _detectedSystems;

/// @brief Field _oculusInteractionTypeNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__oculusInteractionTypeNames, put=setStaticF__oculusInteractionTypeNames)) ::ArrayW<::StringW>  _oculusInteractionTypeNames;

/// @brief Field _scanned, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__scanned, put=setStaticF__scanned)) bool  _scanned;

/// @brief Field _xrInteractionToolkitTypeNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__xrInteractionToolkitTypeNames, put=setStaticF__xrInteractionToolkitTypeNames)) ::ArrayW<::StringW>  _xrInteractionToolkitTypeNames;

/// @brief Method AnyTypeExists, addr 0x9cecb08, size 0x98, virtual false, abstract: false, final false
static inline bool AnyTypeExists(::ArrayW<::StringW>  typeNames) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method EnsureScanned, addr 0x9cec950, size 0x1b8, virtual false, abstract: false, final false
static inline void EnsureScanned() ;

/// @brief Method GetAvailableInteractionSystems, addr 0x9cec8f4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>* GetAvailableInteractionSystems() ;

static inline ::Liv::Lck::InteractionSystemDetector* New_ctor() ;

/// @brief Method TypeExists, addr 0x9cecba0, size 0x174, virtual false, abstract: false, final false
static inline bool TypeExists(::StringW  fullTypeName) ;

/// @brief Method TypeExistsInAssembly, addr 0x9cecd1c, size 0xe4, virtual false, abstract: false, final false
static inline bool TypeExistsInAssembly(::StringW  fullTypeName, ::System::Reflection::Assembly*  assembly) ;

/// @brief Method .ctor, addr 0x9cece00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>* getStaticF__detectedSystems() ;

static inline ::ArrayW<::StringW> getStaticF__oculusInteractionTypeNames() ;

static inline bool getStaticF__scanned() ;

static inline ::ArrayW<::StringW> getStaticF__xrInteractionToolkitTypeNames() ;

static inline void setStaticF__detectedSystems(::System::Collections::Generic::List_1<::GlobalNamespace::InteractionSystemDetector_InteractionSystem>*  value) ;

static inline void setStaticF__oculusInteractionTypeNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF__scanned(bool  value) ;

static inline void setStaticF__xrInteractionToolkitTypeNames(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionSystemDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystemDetector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionSystemDetector(InteractionSystemDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystemDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionSystemDetector(InteractionSystemDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::InteractionSystemDetector) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.InteractionSystemDetector/<>c__DisplayClass8_0
class CORDL_TYPE InteractionSystemDetector___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field fullTypeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullTypeName, put=__cordl_internal_set_fullTypeName)) ::StringW  fullTypeName;

static inline ::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <TypeExists>b__0, addr 0x9ced060, size 0x68, virtual false, abstract: false, final false
inline bool _TypeExists_b__0(::System::Reflection::Assembly*  assembly) ;

constexpr ::StringW const& __cordl_internal_get_fullTypeName() const;

constexpr ::StringW& __cordl_internal_get_fullTypeName() ;

constexpr void __cordl_internal_set_fullTypeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9cecd14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionSystemDetector___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystemDetector___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionSystemDetector___c__DisplayClass8_0(InteractionSystemDetector___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionSystemDetector___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionSystemDetector___c__DisplayClass8_0(InteractionSystemDetector___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24766};

/// @brief Field fullTypeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___fullTypeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0, ___fullTypeName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::InteractionSystemDetector___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck
