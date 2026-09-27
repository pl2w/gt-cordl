#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SimulationItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationItem)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SimulationItem;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SimulationItem*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SimulationItem*, "ExitGames.Client.Photon", "SimulationItem");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SimulationItem
class CORDL_TYPE SimulationItem : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Delay, put=set_Delay)) int32_t  Delay;

/// @brief Field DelayedData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DelayedData, put=__cordl_internal_set_DelayedData)) ::ArrayW<uint8_t>  DelayedData;

/// @brief Field TimeToExecute, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeToExecute, put=__cordl_internal_set_TimeToExecute)) int32_t  TimeToExecute;

/// @brief Field <Delay>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Delay_k__BackingField, put=__cordl_internal_set__Delay_k__BackingField)) int32_t  _Delay_k__BackingField;

/// @brief Field stopw, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopw, put=__cordl_internal_set_stopw)) ::System::Diagnostics::Stopwatch*  stopw;

static inline ::ExitGames::Client::Photon::SimulationItem* New_ctor() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_DelayedData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_DelayedData() ;

constexpr int32_t const& __cordl_internal_get_TimeToExecute() const;

constexpr int32_t& __cordl_internal_get_TimeToExecute() ;

constexpr int32_t const& __cordl_internal_get__Delay_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Delay_k__BackingField() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_stopw() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopw() ;

constexpr void __cordl_internal_set_DelayedData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_TimeToExecute(int32_t  value) ;

constexpr void __cordl_internal_set__Delay_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_stopw(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0xa6c5ad0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Delay, addr 0xa6c5b50, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Delay() ;

/// [CompilerGenerated]
/// @brief Method set_Delay, addr 0xa6c5b58, size 0x8, virtual false, abstract: false, final false
inline void set_Delay(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationItem(SimulationItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationItem(SimulationItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26436};

/// @brief Field stopw, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___stopw;

/// @brief Field TimeToExecute, offset: 0x18, size: 0x4, def value: None
 int32_t  ___TimeToExecute;

/// @brief Field DelayedData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___DelayedData;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Delay>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Delay_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::SimulationItem, ___stopw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SimulationItem, ___TimeToExecute) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SimulationItem, ___DelayedData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::SimulationItem, ____Delay_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::SimulationItem) == 0x30, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
