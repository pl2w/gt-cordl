#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaUIParent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaUIParent)
// Forward declare root types
namespace GlobalNamespace {
class GorillaUIParent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaUIParent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaUIParent*, "", "GorillaUIParent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaUIParent
class CORDL_TYPE GorillaUIParent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaUIParent>  instance;

/// @brief Method Awake, addr 0x59470f4, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaUIParent* New_ctor() ;

/// @brief Method .ctor, addr 0x5947220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaUIParent> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaUIParent>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaUIParent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaUIParent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaUIParent(GorillaUIParent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaUIParent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaUIParent(GorillaUIParent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaUIParent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
