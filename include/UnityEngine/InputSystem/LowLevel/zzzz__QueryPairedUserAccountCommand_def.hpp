#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPairedUserAccountCommand)
namespace GlobalNamespace {
struct QueryPairedUserAccountCommand_Result;
}
namespace GlobalNamespace {
struct QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer;
}
namespace GlobalNamespace {
struct QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand");
// Dependencies UnityEngine.InputSystem.LowLevel.InputDeviceCommand, UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<idBuffer>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
#pragma pack(push, 0)
struct CORDL_TYPE QueryPairedUserAccountCommand {
public:
// Declarations
using Result = ::GlobalNamespace::QueryPairedUserAccountCommand_Result;

using _idBuffer_e__FixedBuffer = ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer;

using _nameBuffer_e__FixedBuffer = ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer;

/// @brief Field baseCommand, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseCommand, put=__cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field handle, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) uint64_t  handle;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

/// @brief Field idBuffer, offset 0x210, size 0x200 
 __declspec(property(get=__cordl_internal_get_idBuffer, put=__cordl_internal_set_idBuffer)) ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer  idBuffer;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

/// @brief Field nameBuffer, offset 0x10, size 0x200 
 __declspec(property(get=__cordl_internal_get_nameBuffer, put=__cordl_internal_set_nameBuffer)) ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer  nameBuffer;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

/// @brief Method Create, addr 0xafed71c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand() ;

constexpr uint64_t const& __cordl_internal_get_handle() const;

constexpr uint64_t& __cordl_internal_get_handle() ;

constexpr ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer const& __cordl_internal_get_idBuffer() const;

constexpr ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer& __cordl_internal_get_idBuffer() ;

constexpr ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer const& __cordl_internal_get_nameBuffer() const;

constexpr ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer& __cordl_internal_get_nameBuffer() ;

constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr void __cordl_internal_set_handle(uint64_t  value) ;

constexpr void __cordl_internal_set_idBuffer(::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_nameBuffer(::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer  value) ;

/// @brief Method get_Type, addr 0xafed484, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_id, addr 0xafed4b4, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_id() ;

/// @brief Method get_name, addr 0xafed5d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_typeStatic, addr 0xafed6ec, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo() ;

/// @brief Method set_id, addr 0xafed4c4, size 0x10c, virtual false, abstract: false, final false
inline void set_id(::StringW  value) ;

/// @brief Method set_name, addr 0xafed5e0, size 0x10c, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryPairedUserAccountCommand() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None, comment: None }, CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nameBuffer", ty: "::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "idBuffer", ty: "::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr QueryPairedUserAccountCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint64_t  handle, ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer  nameBuffer, ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer  idBuffer) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___baseCommand_padding[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___baseCommand_padding_forAlignment[0x0];
/// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  ___baseCommand_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___handle_padding[0x8];
/// @brief Field handle, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___handle;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___handle_padding_forAlignment[0x8];
/// @brief Field handle, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___handle_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___nameBuffer_padding[0x10];
/// [FixedBuffer(typeof(System.Byte), 512)]
/// @brief Field nameBuffer, offset: 0x10, size: 0x200, def value: None
 ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer  ___nameBuffer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___nameBuffer_padding_forAlignment[0x10];
/// [FixedBuffer(typeof(System.Byte), 512)]
/// @brief Field nameBuffer, offset: 0x10, size: 0x200, def value: None
 ::GlobalNamespace::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer  ___nameBuffer_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x210
 uint8_t  ___idBuffer_padding[0x210];
/// [FixedBuffer(typeof(System.Byte), 512)]
/// @brief Field idBuffer, offset: 0x210, size: 0x200, def value: None
 ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer  ___idBuffer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x210 for alignment
 uint8_t  ___idBuffer_padding_forAlignment[0x210];
/// [FixedBuffer(typeof(System.Byte), 512)]
/// @brief Field idBuffer, offset: 0x210, size: 0x200, def value: None
 ::GlobalNamespace::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer  ___idBuffer_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x410};

/// @brief Field kMaxIdLength offset 0xffffffff size 0x4
static constexpr int32_t  kMaxIdLength{static_cast<int32_t>(0x100)};

/// @brief Field kMaxNameLength offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNameLength{static_cast<int32_t>(0x100)};

/// @brief Field kSize offset 0xffffffff size 0x4
static constexpr int32_t  kSize{static_cast<int32_t>(0x410)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand) == 0x410, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
