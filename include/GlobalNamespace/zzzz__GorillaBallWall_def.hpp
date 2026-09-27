#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBallWall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaBallWall)
// Forward declare root types
namespace GlobalNamespace {
class GorillaBallWall;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaBallWall*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaBallWall*, "", "GorillaBallWall");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaBallWall
class CORDL_TYPE GorillaBallWall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaBallWall>  instance;

/// @brief Method Awake, addr 0x5901db8, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaBallWall* New_ctor() ;

/// @brief Method Update, addr 0x5901ee4, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5901ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaBallWall> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaBallWall>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaBallWall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaBallWall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaBallWall(GorillaBallWall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaBallWall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaBallWall(GorillaBallWall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaBallWall) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
