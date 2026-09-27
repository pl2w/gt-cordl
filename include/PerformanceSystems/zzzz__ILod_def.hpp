#pragma once
// IWYU pragma private; include "PerformanceSystems/ILod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILod)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace PerformanceSystems {
class ILod;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::ILod*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::ILod*, "PerformanceSystems", "ILod");
// Dependencies 
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.ILod
class CORDL_TYPE ILod {
public:
// Declarations
 __declspec(property(get=get_CurrentLod)) int32_t  CurrentLod;

 __declspec(property(get=get_LodRanges)) ::ArrayW<float_t>  LodRanges;

 __declspec(property(get=get_OnCulledEvent)) ::UnityEngine::Events::UnityEvent*  OnCulledEvent;

 __declspec(property(get=get_OnLodRangeEvents)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  OnLodRangeEvents;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Method UpdateLod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateLod(::UnityEngine::Vector3  refPos) ;

/// @brief Method get_CurrentLod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_CurrentLod() ;

/// @brief Method get_LodRanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<float_t> get_LodRanges() ;

/// @brief Method get_OnCulledEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Events::UnityEvent* get_OnCulledEvent() ;

/// @brief Method get_OnLodRangeEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Events::UnityEvent*> get_OnLodRangeEvents() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_Position() ;

// Ctor Parameters [CppParam { name: "", ty: "ILod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILod(ILod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PerformanceSystems
