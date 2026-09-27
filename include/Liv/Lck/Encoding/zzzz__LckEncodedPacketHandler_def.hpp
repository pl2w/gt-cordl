#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncodedPacketHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckEncodedPacketHandler)
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
namespace Liv::Lck::Encoding {
struct LckEncodedPacketCallback;
}
// Forward declare root types
namespace Liv::Lck::Encoding {
struct LckEncodedPacketHandler;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Encoding::LckEncodedPacketHandler);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckEncodedPacketHandler, "Liv.Lck.Encoding", "LckEncodedPacketHandler");
// Dependencies Liv.Lck.Encoding.LckEncodedPacketCallback
namespace Liv::Lck::Encoding {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckEncodedPacketHandler
struct CORDL_TYPE LckEncodedPacketHandler {
public:
// Declarations
 __declspec(property(get=get_CaptureStateProvider)) ::GlobalNamespace::ILckCaptureStateProvider*  CaptureStateProvider;

 __declspec(property(get=get_EncodedPacketCallback)) ::Liv::Lck::Encoding::LckEncodedPacketCallback  EncodedPacketCallback;

/// @brief Method .ctor, addr 0x9d42d90, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ILckCaptureStateProvider*  captureStateProvider, ::Liv::Lck::Encoding::LckEncodedPacketCallback  encodedPacketCallback) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CaptureStateProvider, addr 0x9d42d7c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ILckCaptureStateProvider* get_CaptureStateProvider() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_EncodedPacketCallback, addr 0x9d42d84, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback get_EncodedPacketCallback() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEncodedPacketHandler() ;

// Ctor Parameters [CppParam { name: "_CaptureStateProvider_k__BackingField", ty: "::GlobalNamespace::ILckCaptureStateProvider*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EncodedPacketCallback_k__BackingField", ty: "::Liv::Lck::Encoding::LckEncodedPacketCallback", modifiers: "", def_value: None, comment: None }]
constexpr LckEncodedPacketHandler(::GlobalNamespace::ILckCaptureStateProvider*  _CaptureStateProvider_k__BackingField, ::Liv::Lck::Encoding::LckEncodedPacketCallback  _EncodedPacketCallback_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <CaptureStateProvider>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::ILckCaptureStateProvider*  _CaptureStateProvider_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EncodedPacketCallback>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::Liv::Lck::Encoding::LckEncodedPacketCallback  _EncodedPacketCallback_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Encoding::LckEncodedPacketHandler, _CaptureStateProvider_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncodedPacketHandler, _EncodedPacketCallback_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Encoding::LckEncodedPacketHandler) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
