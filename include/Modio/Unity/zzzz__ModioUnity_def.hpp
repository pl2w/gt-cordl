#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModioUnity)
namespace Modio::Unity {
class ModioUnity___c;
}
namespace Modio {
struct LogLevel;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Unity {
class ModioUnity;
}
namespace Modio::Unity {
class ModioUnity___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioUnity*);
MARK_REF_T(::Modio::Unity::ModioUnity___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioUnity*, "Modio.Unity", "ModioUnity");
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioUnity___c*, "Modio.Unity", "ModioUnity/<>c");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioUnity
class CORDL_TYPE ModioUnity : public ::System::Object {
public:
// Declarations
using __c = ::Modio::Unity::ModioUnity___c;

/// @brief Method InitPlatform, addr 0x9f95390, size 0x104, virtual false, abstract: false, final false
static inline void InitPlatform() ;

/// @brief Method Log, addr 0x9f95494, size 0xd8, virtual false, abstract: false, final false
static inline void Log(::Modio::LogLevel  logLevel, ::System::Object*  message) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method OnAfterAssembliesLoaded, addr 0x9f949d4, size 0x990, virtual false, abstract: false, final false
static inline void OnAfterAssembliesLoaded() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnity(ModioUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnity(ModioUnity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32065};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioUnity) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioUnity/<>c
class CORDL_TYPE ModioUnity___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::ModioUnity___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action*  __9__0_0;

static inline ::Modio::Unity::ModioUnity___c* New_ctor() ;

/// @brief Method <OnAfterAssembliesLoaded>b__0_0, addr 0x9f955dc, size 0x18, virtual false, abstract: false, final false
inline void _OnAfterAssembliesLoaded_b__0_0() ;

/// @brief Method .ctor, addr 0x9f955d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::ModioUnity___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Modio::Unity::ModioUnity___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUnity___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUnity___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUnity___c(ModioUnity___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUnity___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUnity___c(ModioUnity___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32064};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioUnity___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
