#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/DistributedUIDGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistributedUIDGenerator)
namespace UnityEngine::Localization::Tables {
class IKeyGenerator;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class DistributedUIDGenerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::DistributedUIDGenerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::DistributedUIDGenerator*, "UnityEngine.Localization.Tables", "DistributedUIDGenerator");
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.DistributedUIDGenerator
class CORDL_TYPE DistributedUIDGenerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CustomEpoch)) int64_t  CustomEpoch;

 __declspec(property(get=get_MachineId, put=set_MachineId)) int32_t  MachineId;

/// @brief Field kMaxNodeId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMaxNodeId, put=setStaticF_kMaxNodeId)) int32_t  kMaxNodeId;

/// @brief Field kMaxSequence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMaxSequence, put=setStaticF_kMaxSequence)) int32_t  kMaxSequence;

/// @brief Field m_CustomEpoch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomEpoch, put=__cordl_internal_set_m_CustomEpoch)) int64_t  m_CustomEpoch;

/// @brief Field m_LastTimestamp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastTimestamp, put=__cordl_internal_set_m_LastTimestamp)) int64_t  m_LastTimestamp;

/// @brief Field m_MachineId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MachineId, put=__cordl_internal_set_m_MachineId)) int32_t  m_MachineId;

/// @brief Field m_Sequence, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Sequence, put=__cordl_internal_set_m_Sequence)) int64_t  m_Sequence;

/// @brief Convert operator to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr operator  ::UnityEngine::Localization::Tables::IKeyGenerator*() noexcept;

/// @brief Method GetMachineId, addr 0xb017abc, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetMachineId() ;

/// @brief Method GetNextKey, addr 0xb017cb8, size 0xc4, virtual true, abstract: false, final true
inline int64_t GetNextKey() ;

static inline ::UnityEngine::Localization::Tables::DistributedUIDGenerator* New_ctor() ;

static inline ::UnityEngine::Localization::Tables::DistributedUIDGenerator* New_ctor(int64_t  customEpoch) ;

/// @brief Method TimeStamp, addr 0xb017d7c, size 0x7c, virtual false, abstract: false, final false
inline int64_t TimeStamp() ;

/// @brief Method WaitNextMillis, addr 0xb017df8, size 0x40, virtual false, abstract: false, final false
inline int64_t WaitNextMillis(int64_t  currentTimestamp) ;

constexpr int64_t const& __cordl_internal_get_m_CustomEpoch() const;

constexpr int64_t& __cordl_internal_get_m_CustomEpoch() ;

constexpr int64_t const& __cordl_internal_get_m_LastTimestamp() const;

constexpr int64_t& __cordl_internal_get_m_LastTimestamp() ;

constexpr int32_t const& __cordl_internal_get_m_MachineId() const;

constexpr int32_t& __cordl_internal_get_m_MachineId() ;

constexpr int64_t const& __cordl_internal_get_m_Sequence() const;

constexpr int64_t& __cordl_internal_get_m_Sequence() ;

constexpr void __cordl_internal_set_m_CustomEpoch(int64_t  value) ;

constexpr void __cordl_internal_set_m_LastTimestamp(int64_t  value) ;

constexpr void __cordl_internal_set_m_MachineId(int32_t  value) ;

constexpr void __cordl_internal_set_m_Sequence(int64_t  value) ;

/// @brief Method .ctor, addr 0xb017b98, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb017c20, size 0x98, virtual false, abstract: false, final false
inline void _ctor(int64_t  customEpoch) ;

static inline int32_t getStaticF_kMaxNodeId() ;

static inline int32_t getStaticF_kMaxSequence() ;

/// @brief Method get_CustomEpoch, addr 0xb017a54, size 0x8, virtual false, abstract: false, final false
inline int64_t get_CustomEpoch() ;

/// @brief Method get_MachineId, addr 0xb017a5c, size 0x60, virtual false, abstract: false, final false
inline int32_t get_MachineId() ;

/// @brief Convert to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr ::UnityEngine::Localization::Tables::IKeyGenerator* i___UnityEngine__Localization__Tables__IKeyGenerator() noexcept;

static inline void setStaticF_kMaxNodeId(int32_t  value) ;

static inline void setStaticF_kMaxSequence(int32_t  value) ;

/// @brief Method set_MachineId, addr 0xb017b1c, size 0x7c, virtual false, abstract: false, final false
inline void set_MachineId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistributedUIDGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistributedUIDGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistributedUIDGenerator(DistributedUIDGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistributedUIDGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistributedUIDGenerator(DistributedUIDGenerator const& ) = delete;

/// @brief Field MachineIdPrefKey offset 0xffffffff size 0x8
static constexpr ::ConstString  MachineIdPrefKey{u"KeyGenerator-MachineId"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25077};

/// @brief Field kMachineIdBits offset 0xffffffff size 0x4
static constexpr int32_t  kMachineIdBits{static_cast<int32_t>(0xa)};

/// @brief Field kSequenceBits offset 0xffffffff size 0x4
static constexpr int32_t  kSequenceBits{static_cast<int32_t>(0xc)};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_CustomEpoch, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_CustomEpoch;

/// @brief Field m_LastTimestamp, offset: 0x18, size: 0x8, def value: None
 int64_t  ___m_LastTimestamp;

/// @brief Field m_Sequence, offset: 0x20, size: 0x8, def value: None
 int64_t  ___m_Sequence;

/// @brief Field m_MachineId, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_MachineId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::DistributedUIDGenerator, ___m_CustomEpoch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::DistributedUIDGenerator, ___m_LastTimestamp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::DistributedUIDGenerator, ___m_Sequence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::DistributedUIDGenerator, ___m_MachineId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::DistributedUIDGenerator) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
