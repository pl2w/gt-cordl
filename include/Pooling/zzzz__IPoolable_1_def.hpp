#pragma once
// IWYU pragma private; include "Pooling/IPoolable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable_1)
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
// Forward declare root types
namespace Pooling {
template<typename T>
class IPoolable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pooling::IPoolable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pooling::IPoolable_1, "Pooling", "IPoolable`1");
// Dependencies 
namespace Pooling {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pooling.IPoolable`1<T>
class CORDL_TYPE IPoolable_1 {
public:
// Declarations
 __declspec(property(get=get_Pool, put=set_Pool)) ::UnityEngine::Pool::IObjectPool_1<T>*  Pool;

/// @brief Method OnCreate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCreate() ;

/// @brief Method OnPostGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPostGet() ;

/// @brief Method OnPreGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPreGet() ;

/// @brief Method OnRelease, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRelease() ;

/// @brief Method get_Pool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pool::IObjectPool_1<T>* get_Pool() ;

/// @brief Method set_Pool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Pool(::UnityEngine::Pool::IObjectPool_1<T>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPoolable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPoolable_1(IPoolable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3866};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pooling
