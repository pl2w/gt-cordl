#pragma once
// IWYU pragma private; include "GlobalNamespace/EnterPlayID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnterPlayID)
// Forward declare root types
namespace GlobalNamespace {
struct EnterPlayID;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnterPlayID);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnterPlayID, "", "EnterPlayID");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnterPlayID
struct CORDL_TYPE EnterPlayID {
public:
// Declarations
 __declspec(property(get=get_IsCurrent)) bool  IsCurrent;

/// @brief Field currentID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentID, put=setStaticF_currentID)) int32_t  currentID;

/// @brief Method GetCurrent, addr 0x5b0e190, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EnterPlayID GetCurrent() ;

/// [OnEnterPlay_Run]
/// @brief Method NextID, addr 0x5b0e130, size 0x60, virtual false, abstract: false, final false
static inline void NextID() ;

static inline int32_t getStaticF_currentID() ;

/// @brief Method get_IsCurrent, addr 0x5b0e1e8, size 0x68, virtual false, abstract: false, final false
inline bool get_IsCurrent() ;

static inline void setStaticF_currentID(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EnterPlayID() ;

// Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EnterPlayID(int32_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 int32_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnterPlayID, id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EnterPlayID) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
