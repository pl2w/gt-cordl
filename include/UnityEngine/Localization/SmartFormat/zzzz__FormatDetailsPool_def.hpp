#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatDetailsPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FormatDetailsPool)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatDetailsPool___c;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class FormatDetailsPool;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatDetailsPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatDetailsPool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatDetailsPool*, "UnityEngine.Localization.SmartFormat", "FormatDetailsPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*, "UnityEngine.Localization.SmartFormat", "FormatDetailsPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatDetailsPool
class CORDL_TYPE FormatDetailsPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*  s_Pool;

/// @brief Method Get, addr 0xb02a680, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* Get(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::System::Collections::Generic::IList_1<::System::Object*>*  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output) ;

/// @brief Method Get, addr 0xb02cb50, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*> Get(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  originalFormat, ::ArrayW<::System::Object*>  originalArgs, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  formatCache, ::System::IFormatProvider*  provider, ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*  output, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>  value) ;

/// @brief Method Release, addr 0xb02a7f0, size 0x80, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatDetailsPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatDetailsPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatDetailsPool(FormatDetailsPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatDetailsPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatDetailsPool(FormatDetailsPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatDetailsPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatDetailsPool/<>c
class CORDL_TYPE FormatDetailsPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xb02ce40, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails* __cctor_b__4_0() ;

/// @brief Method <.cctor>b__4_1, addr 0xb02ce94, size 0x18, virtual false, abstract: false, final false
inline void __cctor_b__4_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  fd) ;

/// @brief Method .ctor, addr 0xb02ce38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatDetailsPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatDetailsPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatDetailsPool___c(FormatDetailsPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatDetailsPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatDetailsPool___c(FormatDetailsPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatDetailsPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
