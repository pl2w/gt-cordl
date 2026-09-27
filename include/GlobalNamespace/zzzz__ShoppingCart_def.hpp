#pragma once
// IWYU pragma private; include "GlobalNamespace/ShoppingCart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ShoppingCart)
// Forward declare root types
namespace GlobalNamespace {
class ShoppingCart;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShoppingCart*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShoppingCart*, "", "ShoppingCart");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShoppingCart
class CORDL_TYPE ShoppingCart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ShoppingCart>  instance;

/// @brief Method Awake, addr 0x5778ab0, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ShoppingCart* New_ctor() ;

/// @brief Method Start, addr 0x5778bdc, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5778be0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5778be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ShoppingCart> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ShoppingCart>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShoppingCart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShoppingCart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShoppingCart(ShoppingCart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShoppingCart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShoppingCart(ShoppingCart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ShoppingCart) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
