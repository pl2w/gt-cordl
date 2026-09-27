#pragma once
// IWYU pragma private; include "UnityEngine/XR/HapticCapabilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticCapabilities)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct HapticCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::HapticCapabilities);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::HapticCapabilities, "UnityEngine.XR", "HapticCapabilities");
// [NativeConditional("ENABLE_VR")]
// Dependencies 
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.HapticCapabilities
struct CORDL_TYPE HapticCapabilities {
public:
// Declarations
 __declspec(property(get=get_bufferFrequencyHz)) uint32_t  bufferFrequencyHz;

 __declspec(property(get=get_bufferMaxSize)) uint32_t  bufferMaxSize;

 __declspec(property(get=get_bufferOptimalSize)) uint32_t  bufferOptimalSize;

 __declspec(property(get=get_numChannels)) uint32_t  numChannels;

 __declspec(property(get=get_supportsBuffer)) bool  supportsBuffer;

 __declspec(property(get=get_supportsImpulse)) bool  supportsImpulse;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>*() ;

/// @brief Method Equals, addr 0xb932f54, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb932fe4, size 0x8c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::XR::HapticCapabilities  other) ;

/// @brief Method GetHashCode, addr 0xb933070, size 0xe8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_bufferFrequencyHz, addr 0xb932f3c, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_bufferFrequencyHz() ;

/// @brief Method get_bufferMaxSize, addr 0xb932f44, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_bufferMaxSize() ;

/// @brief Method get_bufferOptimalSize, addr 0xb932f4c, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_bufferOptimalSize() ;

/// @brief Method get_numChannels, addr 0xb932f24, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_numChannels() ;

/// @brief Method get_supportsBuffer, addr 0xb932f34, size 0x8, virtual false, abstract: false, final false
inline bool get_supportsBuffer() ;

/// @brief Method get_supportsImpulse, addr 0xb932f2c, size 0x8, virtual false, abstract: false, final false
inline bool get_supportsImpulse() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>* i___System__IEquatable_1___UnityEngine__XR__HapticCapabilities_() ;

// Ctor Parameters []
// @brief default ctor
constexpr HapticCapabilities() ;

// Ctor Parameters [CppParam { name: "m_NumChannels", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SupportsImpulse", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SupportsBuffer", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferFrequencyHz", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferMaxSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BufferOptimalSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr HapticCapabilities(uint32_t  m_NumChannels, bool  m_SupportsImpulse, bool  m_SupportsBuffer, uint32_t  m_BufferFrequencyHz, uint32_t  m_BufferMaxSize, uint32_t  m_BufferOptimalSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31610};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_NumChannels, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_NumChannels;

/// @brief Field m_SupportsImpulse, offset: 0x4, size: 0x1, def value: None
 bool  m_SupportsImpulse;

/// @brief Field m_SupportsBuffer, offset: 0x5, size: 0x1, def value: None
 bool  m_SupportsBuffer;

/// @brief Field m_BufferFrequencyHz, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_BufferFrequencyHz;

/// @brief Field m_BufferMaxSize, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_BufferMaxSize;

/// @brief Field m_BufferOptimalSize, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_BufferOptimalSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_NumChannels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_SupportsImpulse) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_SupportsBuffer) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferFrequencyHz) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferMaxSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferOptimalSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::HapticCapabilities) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::XR
