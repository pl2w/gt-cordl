#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffectsPoolStatic_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ParticleEffectsPool_def.hpp"
CORDL_MODULE_EXPORT(ParticleEffectsPoolStatic_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ParticleEffectsPoolStatic_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ParticleEffectsPoolStatic_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ParticleEffectsPoolStatic_1, "", "ParticleEffectsPoolStatic`1");
// Dependencies ParticleEffectsPool
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ParticleEffectsPoolStatic`1<T>
class CORDL_TYPE ParticleEffectsPoolStatic_1 : public ::GlobalNamespace::ParticleEffectsPool {
public:
// Declarations
/// @brief Field gInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gInstance, put=setStaticF_gInstance)) T  gInstance;

static inline ::GlobalNamespace::ParticleEffectsPoolStatic_1<T>* New_ctor() ;

/// @brief Method OnPoolAwake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnPoolAwake() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline T getStaticF_gInstance() ;

/// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_Instance() ;

static inline void setStaticF_gInstance(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleEffectsPoolStatic_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPoolStatic_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleEffectsPoolStatic_1(ParticleEffectsPoolStatic_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleEffectsPoolStatic_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleEffectsPoolStatic_1(ParticleEffectsPoolStatic_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
