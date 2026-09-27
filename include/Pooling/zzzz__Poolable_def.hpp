#pragma once
// IWYU pragma private; include "Pooling/Poolable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Poolable)
namespace Pooling {
template<typename T>
class IPoolable_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
// Forward declare root types
namespace Pooling {
class Poolable;
}
// Write type traits
MARK_REF_T(::Pooling::Poolable*);
DEFINE_IL2CPP_CLASS(::Pooling::Poolable*, "Pooling", "Poolable");
// Dependencies UnityEngine.MonoBehaviour
namespace Pooling {
// Is value type: false
// CS Name: Pooling.Poolable
class CORDL_TYPE Poolable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Pool, put=set_Pool)) ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  Pool;

/// @brief Field <Pool>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Pool_k__BackingField, put=__cordl_internal_set__Pool_k__BackingField)) ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  _Pool_k__BackingField;

/// @brief Field onCreate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCreate, put=__cordl_internal_set_onCreate)) ::UnityEngine::Events::UnityEvent*  onCreate;

/// @brief Field onPostGet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPostGet, put=__cordl_internal_set_onPostGet)) ::UnityEngine::Events::UnityEvent*  onPostGet;

/// @brief Field onPreGet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPreGet, put=__cordl_internal_set_onPreGet)) ::UnityEngine::Events::UnityEvent*  onPreGet;

/// @brief Field onRelease, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRelease, put=__cordl_internal_set_onRelease)) ::UnityEngine::Events::UnityEvent*  onRelease;

/// @brief Convert operator to "::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>"
constexpr operator  ::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>*() noexcept;

static inline ::Pooling::Poolable* New_ctor() ;

/// @brief Method OnCreate, addr 0x5b70cd8, size 0x14, virtual true, abstract: false, final true
inline void OnCreate() ;

/// @brief Method OnPostGet, addr 0x5b70d00, size 0x14, virtual true, abstract: false, final true
inline void OnPostGet() ;

/// @brief Method OnPreGet, addr 0x5b70cec, size 0x14, virtual true, abstract: false, final true
inline void OnPreGet() ;

/// @brief Method OnRelease, addr 0x5b70d14, size 0x14, virtual true, abstract: false, final true
inline void OnRelease() ;

constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>* const& __cordl_internal_get__Pool_k__BackingField() const;

constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*& __cordl_internal_get__Pool_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCreate() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCreate() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPostGet() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPostGet() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPreGet() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPreGet() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRelease() ;

constexpr void __cordl_internal_set__Pool_k__BackingField(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  value) ;

constexpr void __cordl_internal_set_onCreate(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPostGet(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPreGet(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5b70d28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Pool, addr 0x5b70cc8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>* get_Pool() ;

/// @brief Convert to "::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>"
constexpr ::Pooling::IPoolable_1<::UnityW<::Pooling::Poolable>>* i___Pooling__IPoolable_1___UnityW___Pooling__Poolable__() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Pool, addr 0x5b70cd0, size 0x8, virtual true, abstract: false, final true
inline void set_Pool(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Poolable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Poolable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Poolable(Poolable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Poolable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Poolable(Poolable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3867};

/// @brief Field onCreate, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCreate;

/// @brief Field onPreGet, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPreGet;

/// @brief Field onPostGet, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPostGet;

/// @brief Field onRelease, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRelease;

/// [CompilerGenerated]
/// @brief Field <Pool>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::Poolable>>*  ____Pool_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pooling::Poolable, ___onCreate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pooling::Poolable, ___onPreGet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pooling::Poolable, ___onPostGet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pooling::Poolable, ___onRelease) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pooling::Poolable, ____Pool_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pooling::Poolable) == 0x48, "Size mismatch!");

} // namespace end def Pooling
