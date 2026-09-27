#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatCachePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FormatCachePool)
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatCachePool___c;
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
class FormatCachePool;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatCachePool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatCachePool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatCachePool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatCachePool*, "UnityEngine.Localization.SmartFormat", "FormatCachePool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatCachePool___c*, "UnityEngine.Localization.SmartFormat", "FormatCachePool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatCachePool
class CORDL_TYPE FormatCachePool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::FormatCachePool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*  s_Pool;

/// @brief Method Get, addr 0xb02accc, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format) ;

/// @brief Method Get, addr 0xb02c6d0, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::PooledObject_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*> Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::by_ref<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>  value) ;

/// @brief Method Release, addr 0xb02c784, size 0x80, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatCachePool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatCachePool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatCachePool(FormatCachePool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatCachePool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatCachePool(FormatCachePool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatCachePool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatCachePool/<>c
class CORDL_TYPE FormatCachePool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::FormatCachePool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::FormatCachePool___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xb02ca08, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* __cctor_b__4_0() ;

/// @brief Method <.cctor>b__4_1, addr 0xb02ca5c, size 0xf4, virtual false, abstract: false, final false
inline void __cctor_b__4_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  fc) ;

/// @brief Method .ctor, addr 0xb02ca00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::FormatCachePool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatCachePool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatCachePool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatCachePool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatCachePool___c(FormatCachePool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatCachePool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatCachePool___c(FormatCachePool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatCachePool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
