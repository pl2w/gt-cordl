#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMarkerPayload.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMarkerPayload)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRMarkerPayloadType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMarkerPayload;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMarkerPayload);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMarkerPayload, "", "OVRMarkerPayload");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMarkerPayload
struct CORDL_TYPE OVRMarkerPayload {
public:
// Declarations
 __declspec(property(get=get_ByteCount)) int32_t  ByteCount;

 __declspec(property(get=get_Bytes)) ::System::ArraySegment_1<uint8_t>  Bytes;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRMarkerPayload__get_Handle)) uint64_t  IOVRAnchorComponent_OVRMarkerPayload__Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRMarkerPayload__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  IOVRAnchorComponent_OVRMarkerPayload__Type;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRMarkerPayload  Null;

 __declspec(property(get=get_PayloadType)) ::GlobalNamespace::OVRMarkerPayloadType  PayloadType;

 __declspec(property(get=get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  Type;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>*() ;

/// @brief Method AsString, addr 0xa57d098, size 0x268, virtual false, abstract: false, final false
inline ::StringW AsString() ;

/// @brief Method Equals, addr 0xa57ce18, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa57ccd4, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRMarkerPayload  other) ;

/// @brief Method GetBytes, addr 0xa57d3b0, size 0x1e0, virtual false, abstract: false, final false
inline int32_t GetBytes(::System::Span_1<uint8_t>  buffer) ;

/// @brief Method GetHashCode, addr 0xa57cea8, size 0x9c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IOVRAnchorComponent<OVRMarkerPayload>.FromAnchor, addr 0xa57cab4, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRMarkerPayload IOVRAnchorComponent_OVRMarkerPayload__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IOVRAnchorComponent<OVRMarkerPayload>.SetEnabledAsync, addr 0xa57cc88, size 0x4c, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRMarkerPayload__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method IOVRAnchorComponent<OVRMarkerPayload>.get_Handle, addr 0xa57ca60, size 0x54, virtual true, abstract: false, final true
inline uint64_t IOVRAnchorComponent_OVRMarkerPayload__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRMarkerPayload>.get_Type, addr 0xa57ca00, size 0x54, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRMarkerPayload__get_Type() ;

/// @brief Method ToString, addr 0xa57cf44, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa57cae4, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRMarkerPayload getStaticF_Null() ;

/// @brief Method get_ByteCount, addr 0xa57d300, size 0xb0, virtual false, abstract: false, final false
inline int32_t get_ByteCount() ;

/// @brief Method get_Bytes, addr 0xa57d590, size 0x1c4, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Bytes() ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa57cfe0, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_IsEnabled, addr 0xa57cba4, size 0xe4, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsNull, addr 0xa57cb48, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_PayloadType, addr 0xa57cfe8, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRMarkerPayloadType get_PayloadType() ;

/// @brief Method get_Type, addr 0xa57ca54, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type() ;

/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRMarkerPayload>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRMarkerPayload_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRMarkerPayload>* i___System__IEquatable_1___GlobalNamespace__OVRMarkerPayload_() ;

/// @brief Method op_Equality, addr 0xa57cd3c, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRMarkerPayload  lhs, ::GlobalNamespace::OVRMarkerPayload  rhs) ;

/// @brief Method op_Inequality, addr 0xa57cda8, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRMarkerPayload  lhs, ::GlobalNamespace::OVRMarkerPayload  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRMarkerPayload  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRMarkerPayload() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMarkerPayload(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11863};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMarkerPayload, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMarkerPayload) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
