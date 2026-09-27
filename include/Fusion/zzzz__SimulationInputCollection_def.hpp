#pragma once
// IWYU pragma private; include "Fusion/SimulationInputCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationInputCollection)
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SimulationInput;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Fusion {
class SimulationInputCollection;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationInputCollection*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationInputCollection*, "Fusion", "SimulationInputCollection");
// Dependencies Fusion.SimulationInput, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationInputCollection
class CORDL_TYPE SimulationInputCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _byIndex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__byIndex, put=__cordl_internal_set__byIndex)) ::ArrayW<::Fusion::SimulationInput*>  _byIndex;

/// @brief Field _byPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__byPlayer, put=__cordl_internal_set__byPlayer)) ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*  _byPlayer;

/// @brief Field _count, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Method AddInput, addr 0x6004a24, size 0x150, virtual false, abstract: false, final false
inline void AddInput(::Fusion::SimulationInput*  input) ;

/// @brief Method Clear, addr 0x60049b8, size 0x6c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetByIndex, addr 0x60048f8, size 0x48, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* GetByIndex(int32_t  index) ;

/// @brief Method GetByPlayer, addr 0x6004940, size 0x78, virtual false, abstract: false, final false
inline ::Fusion::SimulationInput* GetByPlayer(::Fusion::PlayerRef  player) ;

static inline ::Fusion::SimulationInputCollection* New_ctor(int32_t  playerCount) ;

constexpr ::ArrayW<::Fusion::SimulationInput*> const& __cordl_internal_get__byIndex() const;

constexpr ::ArrayW<::Fusion::SimulationInput*>& __cordl_internal_get__byIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>* const& __cordl_internal_get__byPlayer() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*& __cordl_internal_get__byPlayer() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr void __cordl_internal_set__byIndex(::ArrayW<::Fusion::SimulationInput*>  value) ;

constexpr void __cordl_internal_set__byPlayer(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

/// @brief Method .ctor, addr 0x60047d8, size 0x120, virtual false, abstract: false, final false
inline void _ctor(int32_t  playerCount) ;

/// @brief Method get_Count, addr 0x60047d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationInputCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationInputCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationInputCollection(SimulationInputCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationInputCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationInputCollection(SimulationInputCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19343};

/// @brief Field _count, offset: 0x10, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _byIndex, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Fusion::SimulationInput*>  ____byIndex;

/// @brief Field _byPlayer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*  ____byPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationInputCollection, ____count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInputCollection, ____byIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationInputCollection, ____byPlayer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationInputCollection) == 0x28, "Size mismatch!");

} // namespace end def Fusion
