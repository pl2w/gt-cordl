#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RandomWeightedOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomWeightedOutput)
namespace GorillaTag::Cosmetics {
class NetworkedRandomProvider;
}
namespace GorillaTag::Cosmetics {
class RandomWeightedOutput_WeightedOutput;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RandomWeightedOutput;
}
namespace GorillaTag::Cosmetics {
class RandomWeightedOutput_WeightedOutput;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RandomWeightedOutput*);
MARK_REF_T(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RandomWeightedOutput*, "GorillaTag.Cosmetics", "RandomWeightedOutput");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*, "GorillaTag.Cosmetics", "RandomWeightedOutput/WeightedOutput");
// [RequireComponent(typeof(GorillaTag.Cosmetics.NetworkedRandomProvider))]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RandomWeightedOutput
class CORDL_TYPE RandomWeightedOutput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using WeightedOutput = ::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput;

/// @brief Field debugLog, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugLog, put=__cordl_internal_set_debugLog)) bool  debugLog;

/// @brief Field networkProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkProvider, put=__cordl_internal_set_networkProvider)) ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  networkProvider;

/// @brief Field onAnyPick, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAnyPick, put=__cordl_internal_set_onAnyPick)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onAnyPick;

/// @brief Field outputs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputs, put=__cordl_internal_set_outputs)) ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*  outputs;

/// @brief Method Awake, addr 0x5d9f760, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetDeterministicPickIndex, addr 0x5d9f950, size 0x3bc, virtual false, abstract: false, final false
inline int32_t GetDeterministicPickIndex() ;

static inline ::GorillaTag::Cosmetics::RandomWeightedOutput* New_ctor() ;

/// @brief Method PickNextRandom, addr 0x5d9f804, size 0x14c, virtual false, abstract: false, final false
inline void PickNextRandom() ;

constexpr bool const& __cordl_internal_get_debugLog() const;

constexpr bool& __cordl_internal_get_debugLog() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider> const& __cordl_internal_get_networkProvider() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>& __cordl_internal_get_networkProvider() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onAnyPick() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onAnyPick() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>* const& __cordl_internal_get_outputs() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*& __cordl_internal_get_outputs() ;

constexpr void __cordl_internal_set_debugLog(bool  value) ;

constexpr void __cordl_internal_set_networkProvider(::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  value) ;

constexpr void __cordl_internal_set_onAnyPick(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_outputs(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*  value) ;

/// @brief Method .ctor, addr 0x5d9fd0c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomWeightedOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomWeightedOutput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomWeightedOutput(RandomWeightedOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomWeightedOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomWeightedOutput(RandomWeightedOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4967};

/// [Header("Network Provider")]
/// [Tooltip("For best result, pick Float01 or Double01 as the output mode in your NetworkedRandomProvider")]
/// [SerializeField]
/// @brief Field networkProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::NetworkedRandomProvider>  ___networkProvider;

/// [Header("Weighted Outputs")]
/// [SerializeField]
/// @brief Field outputs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput*>*  ___outputs;

/// [Header("Event")]
/// [SerializeField]
/// @brief Field onAnyPick, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onAnyPick;

/// [SerializeField]
/// @brief Field debugLog, offset: 0x38, size: 0x1, def value: None
 bool  ___debugLog;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput, ___networkProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput, ___outputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput, ___onAnyPick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput, ___debugLog) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RandomWeightedOutput) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RandomWeightedOutput/WeightedOutput
class CORDL_TYPE RandomWeightedOutput_WeightedOutput : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field onPick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPick, put=__cordl_internal_set_onPick)) ::UnityEngine::Events::UnityEvent*  onPick;

/// @brief Field weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

static inline ::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput* New_ctor() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPick() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPick() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_onPick(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x5d9fde8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomWeightedOutput_WeightedOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomWeightedOutput_WeightedOutput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomWeightedOutput_WeightedOutput(RandomWeightedOutput_WeightedOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomWeightedOutput_WeightedOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomWeightedOutput_WeightedOutput(RandomWeightedOutput_WeightedOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4966};

/// [SerializeField]
/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// [SerializeField]
/// [Range(0, 100)]
/// @brief Field weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___weight;

/// [SerializeField]
/// @brief Field enabled, offset: 0x1c, size: 0x1, def value: None
 bool  ___enabled;

/// [SerializeField]
/// @brief Field onPick, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput, ___enabled) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput, ___onPick) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RandomWeightedOutput_WeightedOutput) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
