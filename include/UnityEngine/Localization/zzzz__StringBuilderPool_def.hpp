#pragma once
// IWYU pragma private; include "UnityEngine/Localization/StringBuilderPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StringBuilderPool)
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::Localization {
class StringBuilderPool___c;
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
namespace UnityEngine::Localization {
class StringBuilderPool;
}
namespace UnityEngine::Localization {
class StringBuilderPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::StringBuilderPool*);
MARK_REF_T(::UnityEngine::Localization::StringBuilderPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::StringBuilderPool*, "UnityEngine.Localization", "StringBuilderPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::StringBuilderPool___c*, "UnityEngine.Localization", "StringBuilderPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.StringBuilderPool
class CORDL_TYPE StringBuilderPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::StringBuilderPool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*  s_Pool;

/// @brief Method Get, addr 0xb015e0c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* Get() ;

/// @brief Method Get, addr 0xb015e84, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Pool::PooledObject_1<::System::Text::StringBuilder*> Get(::by_ref<::System::Text::StringBuilder*>  value) ;

/// @brief Method Release, addr 0xb015f04, size 0x80, virtual false, abstract: false, final false
static inline void Release(::System::Text::StringBuilder*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringBuilderPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringBuilderPool(StringBuilderPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringBuilderPool(StringBuilderPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::StringBuilderPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.StringBuilderPool/<>c
class CORDL_TYPE StringBuilderPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::StringBuilderPool___c*  __9;

static inline ::UnityEngine::Localization::StringBuilderPool___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xb016188, size 0x54, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* __cctor_b__4_0() ;

/// @brief Method <.cctor>b__4_1, addr 0xb0161dc, size 0x18, virtual false, abstract: false, final false
inline void __cctor_b__4_1(::System::Text::StringBuilder*  sb) ;

/// @brief Method .ctor, addr 0xb016180, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::StringBuilderPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::StringBuilderPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringBuilderPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringBuilderPool___c(StringBuilderPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringBuilderPool___c(StringBuilderPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25067};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::StringBuilderPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
