#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateHistory_RecordHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithControlIndex_e__FixedBuffer_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_RecordHeader__m_StateWithoutControlIndex_e__FixedBuffer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_RecordHeader)
namespace GlobalNamespace {
struct RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer;
}
namespace GlobalNamespace {
struct RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputStateHistory_RecordHeader;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputStateHistory_RecordHeader);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputStateHistory_RecordHeader, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader");
// Dependencies UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithControlIndex>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithoutControlIndex>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory/RecordHeader
struct CORDL_TYPE InputStateHistory_RecordHeader {
public:
// Declarations
using _m_StateWithControlIndex_e__FixedBuffer = ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer;

using _m_StateWithoutControlIndex_e__FixedBuffer = ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer;

/// @brief Field controlIndex, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_controlIndex, put=__cordl_internal_set_controlIndex)) int32_t  controlIndex;

/// @brief Field m_StateWithControlIndex, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StateWithControlIndex, put=__cordl_internal_set_m_StateWithControlIndex)) ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  m_StateWithControlIndex;

/// @brief Field m_StateWithoutControlIndex, offset 0xc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StateWithoutControlIndex, put=__cordl_internal_set_m_StateWithoutControlIndex)) ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  m_StateWithoutControlIndex;

 __declspec(property(get=get_statePtrWithControlIndex)) uint8_t*  statePtrWithControlIndex;

 __declspec(property(get=get_statePtrWithoutControlIndex)) uint8_t*  statePtrWithoutControlIndex;

/// @brief Field time, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) double_t  time;

/// @brief Field version, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) uint32_t  version;

constexpr int32_t const& __cordl_internal_get_controlIndex() const;

constexpr int32_t& __cordl_internal_get_controlIndex() ;

constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer const& __cordl_internal_get_m_StateWithControlIndex() const;

constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer& __cordl_internal_get_m_StateWithControlIndex() ;

constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer const& __cordl_internal_get_m_StateWithoutControlIndex() const;

constexpr ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer& __cordl_internal_get_m_StateWithoutControlIndex() ;

constexpr double_t const& __cordl_internal_get_time() const;

constexpr double_t& __cordl_internal_get_time() ;

constexpr uint32_t const& __cordl_internal_get_version() const;

constexpr uint32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_controlIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_StateWithControlIndex(::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_m_StateWithoutControlIndex(::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_time(double_t  value) ;

constexpr void __cordl_internal_set_version(uint32_t  value) ;

/// @brief Method get_statePtrWithControlIndex, addr 0xaffcbe0, size 0x8, virtual false, abstract: false, final false
inline uint8_t* get_statePtrWithControlIndex() ;

/// @brief Method get_statePtrWithoutControlIndex, addr 0xaffcbd8, size 0x8, virtual false, abstract: false, final false
inline uint8_t* get_statePtrWithoutControlIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputStateHistory_RecordHeader() ;

// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateWithoutControlIndex", ty: "::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateWithControlIndex", ty: "::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr InputStateHistory_RecordHeader(double_t  time, uint32_t  version, int32_t  controlIndex, ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  m_StateWithoutControlIndex, ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  m_StateWithControlIndex) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___time_padding[0x0];
/// @brief Field time, offset: 0x0, size: 0x8, def value: None
 double_t  ___time;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___time_padding_forAlignment[0x0];
/// @brief Field time, offset: 0x0, size: 0x8, def value: None
 double_t  ___time_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___version_padding[0x8];
/// @brief Field version, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___version;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___version_padding_forAlignment[0x8];
/// @brief Field version, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___version_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___controlIndex_padding[0xc];
/// @brief Field controlIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  ___controlIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___controlIndex_padding_forAlignment[0xc];
/// @brief Field controlIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  ___controlIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___m_StateWithoutControlIndex_padding[0xc];
/// [FixedBuffer(typeof(System.Byte), 1)]
/// @brief Field m_StateWithoutControlIndex, offset: 0xc, size: 0x1, def value: None
 ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  ___m_StateWithoutControlIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___m_StateWithoutControlIndex_padding_forAlignment[0xc];
/// [FixedBuffer(typeof(System.Byte), 1)]
/// @brief Field m_StateWithoutControlIndex, offset: 0xc, size: 0x1, def value: None
 ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithoutControlIndex_e__FixedBuffer  ___m_StateWithoutControlIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___m_StateWithControlIndex_padding[0x10];
/// [FixedBuffer(typeof(System.Byte), 1)]
/// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
 ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  ___m_StateWithControlIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___m_StateWithControlIndex_padding_forAlignment[0x10];
/// [FixedBuffer(typeof(System.Byte), 1)]
/// @brief Field m_StateWithControlIndex, offset: 0x10, size: 0x1, def value: None
 ::GlobalNamespace::RecordHeader_InputStateHistory__m_StateWithControlIndex_e__FixedBuffer  ___m_StateWithControlIndex_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field kSizeWithControlIndex offset 0xffffffff size 0x4
static constexpr int32_t  kSizeWithControlIndex{static_cast<int32_t>(0x10)};

/// @brief Field kSizeWithoutControlIndex offset 0xffffffff size 0x4
static constexpr int32_t  kSizeWithoutControlIndex{static_cast<int32_t>(0xc)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputStateHistory_RecordHeader) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
