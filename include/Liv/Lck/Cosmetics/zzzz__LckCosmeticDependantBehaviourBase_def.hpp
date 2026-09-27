#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticDependantBehaviourBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCosmeticDependantBehaviourBase)
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependantPlayerIdSupplier;
}
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependant;
}
namespace Liv::Lck::Cosmetics {
class ILckCosmeticsManager;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckCosmeticDependantBehaviourBase;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase*, "Liv.Lck.Cosmetics", "LckCosmeticDependantBehaviourBase");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticDependantBehaviourBase
class CORDL_TYPE LckCosmeticDependantBehaviourBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PlayerId, put=set_PlayerId)) ::StringW  PlayerId;

/// @brief Field _cosmeticType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticType, put=__cordl_internal_set__cosmeticType)) ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  _cosmeticType;

/// @brief Field _cosmeticsManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cosmeticsManager, put=__cordl_internal_set__cosmeticsManager)) ::Liv::Lck::Cosmetics::ILckCosmeticsManager*  _cosmeticsManager;

/// @brief Field _lckCosmeticDependantPlayerIdSupplier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckCosmeticDependantPlayerIdSupplier, put=__cordl_internal_set__lckCosmeticDependantPlayerIdSupplier)) ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*  _lckCosmeticDependantPlayerIdSupplier;

/// @brief Field _playerIdSupplier, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerIdSupplier, put=__cordl_internal_set__playerIdSupplier)) ::UnityW<::UnityEngine::GameObject>  _playerIdSupplier;

/// @brief Convert operator to "::Liv::Lck::Cosmetics::ILckCosmeticDependant"
constexpr operator  ::Liv::Lck::Cosmetics::ILckCosmeticDependant*() noexcept;

/// @brief Method Awake, addr 0x9d65048, size 0x1d4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCosmeticType, addr 0x9d64f40, size 0x108, virtual true, abstract: false, final true
inline ::StringW GetCosmeticType() ;

static inline ::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase* New_ctor() ;

/// @brief Method OnCosmeticLoaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCosmeticLoaded(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets) ;

/// @brief Method OnCosmeticReset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCosmeticReset() ;

/// @brief Method OnDestroy, addr 0x9d6521c, size 0xb0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__9_0, addr 0x9d652d4, size 0x14c, virtual false, abstract: false, final false
inline void _Awake_b__9_0() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType> const& __cordl_internal_get__cosmeticType() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>& __cordl_internal_get__cosmeticType() ;

constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager* const& __cordl_internal_get__cosmeticsManager() const;

constexpr ::Liv::Lck::Cosmetics::ILckCosmeticsManager*& __cordl_internal_get__cosmeticsManager() ;

constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier* const& __cordl_internal_get__lckCosmeticDependantPlayerIdSupplier() const;

constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*& __cordl_internal_get__lckCosmeticDependantPlayerIdSupplier() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playerIdSupplier() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playerIdSupplier() ;

constexpr void __cordl_internal_set__cosmeticType(::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  value) ;

constexpr void __cordl_internal_set__cosmeticsManager(::Liv::Lck::Cosmetics::ILckCosmeticsManager*  value) ;

constexpr void __cordl_internal_set__lckCosmeticDependantPlayerIdSupplier(::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*  value) ;

constexpr void __cordl_internal_set__playerIdSupplier(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d652cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PlayerId() ;

/// @brief Convert to "::Liv::Lck::Cosmetics::ILckCosmeticDependant"
constexpr ::Liv::Lck::Cosmetics::ILckCosmeticDependant* i___Liv__Lck__Cosmetics__ILckCosmeticDependant() noexcept;

/// @brief Method set_PlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PlayerId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticDependantBehaviourBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticDependantBehaviourBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticDependantBehaviourBase(LckCosmeticDependantBehaviourBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticDependantBehaviourBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticDependantBehaviourBase(LckCosmeticDependantBehaviourBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24979};

/// [InjectLck]
/// @brief Field _cosmeticsManager, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::ILckCosmeticsManager*  ____cosmeticsManager;

/// [SerializeField]
/// [Tooltip("Assign the CosmeticType of this asset, provided as a LckCosmeticType SO.")]
/// @brief Field _cosmeticType, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  ____cosmeticType;

/// [Tooltip("The player ID supplier implementing ILckCosmeticDependantPlayerIdSupplier.")]
/// [SerializeField]
/// @brief Field _playerIdSupplier, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playerIdSupplier;

/// @brief Field _lckCosmeticDependantPlayerIdSupplier, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*  ____lckCosmeticDependantPlayerIdSupplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase, ____cosmeticsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase, ____cosmeticType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase, ____playerIdSupplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase, ____lckCosmeticDependantPlayerIdSupplier) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticDependantBehaviourBase) == 0x40, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
