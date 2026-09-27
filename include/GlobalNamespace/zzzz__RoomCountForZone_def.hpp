#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomCountForZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomCountForZone)
namespace GlobalNamespace {
struct GTZone;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomCountForZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomCountForZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomCountForZone*, "", "RoomCountForZone");
// Dependencies GTZone, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomCountForZone
class CORDL_TYPE RoomCountForZone : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Zone)) ::GlobalNamespace::GTZone  Zone;

/// @brief Field count, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field zone, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::RoomCountForZone* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5adc188, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x5adc178, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Zone, addr 0x5adc180, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_Zone() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomCountForZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomCountForZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomCountForZone(RoomCountForZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomCountForZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomCountForZone(RoomCountForZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3407};

/// [SerializeField]
/// @brief Field zone, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field count, offset: 0x14, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomCountForZone, ___zone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomCountForZone, ___count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomCountForZone) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
