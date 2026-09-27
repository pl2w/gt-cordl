#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap_Iterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectionMap_Iterator)
namespace Fusion::Sockets {
struct NetConnectionMap;
}
namespace Fusion::Sockets {
struct NetConnection;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetConnectionMap_Iterator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConnectionMap_Iterator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConnectionMap_Iterator, "Fusion.Sockets", "NetConnectionMap/Iterator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectionMap/Iterator
struct CORDL_TYPE NetConnectionMap_Iterator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::Fusion::Sockets::NetConnection*  Current;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method Next, addr 0x602b700, size 0x94, virtual false, abstract: false, final false
inline bool Next() ;

/// @brief Method .ctor, addr 0x602b6dc, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Sockets::NetConnectionMap*  map) ;

/// @brief Method get_Current, addr 0x602b67c, size 0x40, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetConnection* get_Current() ;

/// @brief Method get_IsValid, addr 0x602b6bc, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConnectionMap_Iterator() ;

// Ctor Parameters [CppParam { name: "_map", ty: "::Fusion::Sockets::NetConnectionMap*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectionMap_Iterator(::Fusion::Sockets::NetConnectionMap*  _map, int32_t  _index, int32_t  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _map, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::NetConnectionMap*  _map;

/// @brief Field _index, offset: 0x8, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _count, offset: 0xc, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConnectionMap_Iterator, _map) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnectionMap_Iterator, _index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetConnectionMap_Iterator, _count) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConnectionMap_Iterator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
