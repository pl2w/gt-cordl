#pragma once
// IWYU pragma private; include "Pooling/PoolableFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PoolableFX)
namespace Pooling {
template<typename T>
class IPoolable_1;
}
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace Pooling {
class PoolableFX;
}
// Write type traits
MARK_REF_T(::Pooling::PoolableFX*);
DEFINE_IL2CPP_CLASS(::Pooling::PoolableFX*, "Pooling", "PoolableFX");
// Dependencies UnityEngine.MonoBehaviour
namespace Pooling {
// Is value type: false
// CS Name: Pooling.PoolableFX
class CORDL_TYPE PoolableFX : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Pool, put=set_Pool)) ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  Pool;

/// @brief Field <Pool>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Pool_k__BackingField, put=__cordl_internal_set__Pool_k__BackingField)) ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  _Pool_k__BackingField;

/// @brief Field particles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Convert operator to "::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>"
constexpr operator  ::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>*() noexcept;

static inline ::Pooling::PoolableFX* New_ctor() ;

/// @brief Method OnCreate, addr 0x5b70e30, size 0x4, virtual true, abstract: false, final true
inline void OnCreate() ;

/// @brief Method OnParticleSystemStopped, addr 0x5b70ebc, size 0x48, virtual false, abstract: false, final false
inline void OnParticleSystemStopped() ;

/// @brief Method OnPostGet, addr 0x5b70e38, size 0x80, virtual true, abstract: false, final true
inline void OnPostGet() ;

/// @brief Method OnPreGet, addr 0x5b70e34, size 0x4, virtual true, abstract: false, final true
inline void OnPreGet() ;

/// @brief Method OnRelease, addr 0x5b70eb8, size 0x4, virtual true, abstract: false, final true
inline void OnRelease() ;

/// @brief Method Reset, addr 0x5b70d40, size 0xd8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Stop, addr 0x5b70e18, size 0x18, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>* const& __cordl_internal_get__Pool_k__BackingField() const;

constexpr ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*& __cordl_internal_get__Pool_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr void __cordl_internal_set__Pool_k__BackingField(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5b70f04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Pool, addr 0x5b70d30, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>* get_Pool() ;

/// @brief Convert to "::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>"
constexpr ::Pooling::IPoolable_1<::UnityW<::Pooling::PoolableFX>>* i___Pooling__IPoolable_1___UnityW___Pooling__PoolableFX__() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Pool, addr 0x5b70d38, size 0x8, virtual true, abstract: false, final true
inline void set_Pool(::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoolableFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoolableFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableFX(PoolableFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableFX(PoolableFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3869};

/// [SerializeField]
/// @brief Field particles, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [CompilerGenerated]
/// @brief Field <Pool>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Pool::IObjectPool_1<::UnityW<::Pooling::PoolableFX>>*  ____Pool_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pooling::PoolableFX, ___particles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pooling::PoolableFX, ____Pool_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pooling::PoolableFX) == 0x30, "Size mismatch!");

} // namespace end def Pooling
