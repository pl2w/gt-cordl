#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/SplitListPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplitListPool)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format_SplitList;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat {
class SplitListPool___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class SplitListPool;
}
namespace UnityEngine::Localization::SmartFormat {
class SplitListPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::SplitListPool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::SplitListPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::SplitListPool*, "UnityEngine.Localization.SmartFormat", "SplitListPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::SplitListPool___c*, "UnityEngine.Localization.SmartFormat", "SplitListPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.SplitListPool
class CORDL_TYPE SplitListPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::SplitListPool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  s_Pool;

/// @brief Method Get, addr 0xb02eda4, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* Get(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Collections::Generic::List_1<int32_t>*  splits) ;

/// @brief Method Release, addr 0xb02ef48, size 0x80, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplitListPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplitListPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplitListPool(SplitListPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplitListPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplitListPool(SplitListPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::SplitListPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.SplitListPool/<>c
class CORDL_TYPE SplitListPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::SplitListPool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::SplitListPool___c* New_ctor() ;

/// @brief Method <.cctor>b__3_0, addr 0xb02f1cc, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList* __cctor_b__3_0() ;

/// @brief Method <.cctor>b__3_1, addr 0xb02f2a4, size 0x14, virtual false, abstract: false, final false
inline void __cctor_b__3_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format_SplitList*  sl) ;

/// @brief Method .ctor, addr 0xb02f1c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::SplitListPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::SplitListPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplitListPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplitListPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplitListPool___c(SplitListPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplitListPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplitListPool___c(SplitListPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::SplitListPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
