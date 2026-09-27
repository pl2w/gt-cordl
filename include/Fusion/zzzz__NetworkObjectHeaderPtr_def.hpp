#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderPtr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderPtr)
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
struct NetworkObjectHeader;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeaderPtr;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeaderPtr);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderPtr, "Fusion", "NetworkObjectHeaderPtr");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeaderPtr
struct CORDL_TYPE NetworkObjectHeaderPtr {
public:
// Declarations
 __declspec(property(get=get_Data)) ::System::Span_1<int32_t>  Data;

 __declspec(property(get=get_Id)) ::Fusion::NetworkId  Id;

 __declspec(property(get=get_Type)) ::Fusion::NetworkObjectTypeId  Type;

/// @brief Method .ctor, addr 0x5fab2a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkObjectHeader*  ptr) ;

/// @brief Method get_Data, addr 0x5fa9dcc, size 0x60, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Data() ;

/// @brief Method get_Id, addr 0x5fab2c8, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::NetworkId get_Id() ;

/// @brief Method get_Type, addr 0x5fab2b0, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::NetworkObjectTypeId get_Type() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderPtr() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "::Fusion::NetworkObjectHeader*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeaderPtr(::Fusion::NetworkObjectHeader*  Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkObjectHeader*  Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderPtr, Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderPtr) == 0x8, "Size mismatch!");

} // namespace end def Fusion
