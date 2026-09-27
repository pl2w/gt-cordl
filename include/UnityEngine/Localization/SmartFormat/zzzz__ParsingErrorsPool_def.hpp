#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/ParsingErrorsPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ParsingErrorsPool)
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class ParsingErrors;
}
namespace UnityEngine::Localization::SmartFormat {
class ParsingErrorsPool___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class ParsingErrorsPool;
}
namespace UnityEngine::Localization::SmartFormat {
class ParsingErrorsPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool*, "UnityEngine.Localization.SmartFormat", "ParsingErrorsPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*, "UnityEngine.Localization.SmartFormat", "ParsingErrorsPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.ParsingErrorsPool
class CORDL_TYPE ParsingErrorsPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*  s_Pool;

/// @brief Method Get, addr 0xb02ea1c, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format) ;

/// @brief Method Release, addr 0xb02eab4, size 0x80, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrorsPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorsPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrorsPool(ParsingErrorsPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorsPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrorsPool(ParsingErrorsPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25148};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.ParsingErrorsPool/<>c
class CORDL_TYPE ParsingErrorsPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c* New_ctor() ;

/// @brief Method <.cctor>b__3_0, addr 0xb02ed38, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* __cctor_b__3_0() ;

/// @brief Method <.cctor>b__3_1, addr 0xb02ed8c, size 0x18, virtual false, abstract: false, final false
inline void __cctor_b__3_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  pe) ;

/// @brief Method .ctor, addr 0xb02ed30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParsingErrorsPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorsPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParsingErrorsPool___c(ParsingErrorsPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParsingErrorsPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParsingErrorsPool___c(ParsingErrorsPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::ParsingErrorsPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
