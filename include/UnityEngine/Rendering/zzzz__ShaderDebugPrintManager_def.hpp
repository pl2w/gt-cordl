#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderDebugPrintManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderDebugPrintManager)
namespace GlobalNamespace {
struct ShaderDebugPrintManager_DebugValueType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ShaderDebugPrintInput;
}
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager_Profiling;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager;
}
namespace UnityEngine::Rendering {
class ShaderDebugPrintManager_Profiling;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ShaderDebugPrintManager*);
MARK_REF_T(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShaderDebugPrintManager*, "UnityEngine.Rendering", "ShaderDebugPrintManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling*, "UnityEngine.Rendering", "ShaderDebugPrintManager/Profiling");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager
class CORDL_TYPE ShaderDebugPrintManager : public ::System::Object {
public:
// Declarations
using DebugValueType = ::GlobalNamespace::ShaderDebugPrintManager_DebugValueType;

using Profiling = ::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling;

/// @brief Field m_BufferReadCompleteAction, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BufferReadCompleteAction, put=__cordl_internal_set_m_BufferReadCompleteAction)) ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  m_BufferReadCompleteAction;

/// @brief Field m_FrameCleared, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FrameCleared, put=__cordl_internal_set_m_FrameCleared)) bool  m_FrameCleared;

/// @brief Field m_FrameCounter, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameCounter, put=__cordl_internal_set_m_FrameCounter)) int32_t  m_FrameCounter;

/// @brief Field m_OutputAction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OutputAction, put=__cordl_internal_set_m_OutputAction)) ::System::Action_1<::StringW>*  m_OutputAction;

/// @brief Field m_OutputBuffers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OutputBuffers, put=__cordl_internal_set_m_OutputBuffers)) ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*  m_OutputBuffers;

/// @brief Field m_OutputLine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OutputLine, put=__cordl_internal_set_m_OutputLine)) ::StringW  m_OutputLine;

/// @brief Field m_ReadbackRequests, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReadbackRequests, put=__cordl_internal_set_m_ReadbackRequests)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  m_ReadbackRequests;

/// @brief Field m_ShaderPropertyIDInputFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_ShaderPropertyIDInputFrame, put=setStaticF_m_ShaderPropertyIDInputFrame)) int32_t  m_ShaderPropertyIDInputFrame;

/// @brief Field m_ShaderPropertyIDInputMouse, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_ShaderPropertyIDInputMouse, put=setStaticF_m_ShaderPropertyIDInputMouse)) int32_t  m_ShaderPropertyIDInputMouse;

/// @brief Field m_shaderDebugOutputData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_shaderDebugOutputData, put=setStaticF_m_shaderDebugOutputData)) int32_t  m_shaderDebugOutputData;

 __declspec(property(put=set_outputAction)) ::System::Action_1<::StringW>*  outputAction;

 __declspec(property(get=get_outputLine)) ::StringW  outputLine;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Rendering::ShaderDebugPrintManager*  s_Instance;

/// @brief Method BufferReadComplete, addr 0xb13bb3c, size 0xe34, virtual false, abstract: false, final false
inline void BufferReadComplete(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request) ;

/// @brief Method ClearShaderDebugPrintBuffer, addr 0xb13ba54, size 0xe8, virtual false, abstract: false, final false
inline void ClearShaderDebugPrintBuffer() ;

/// @brief Method DebugValueTypeToElemSize, addr 0xb13b4ec, size 0x24, virtual false, abstract: false, final false
inline int32_t DebugValueTypeToElemSize(::GlobalNamespace::ShaderDebugPrintManager_DebugValueType  type) ;

/// @brief Method DefaultOutput, addr 0xb13caf8, size 0x58, virtual false, abstract: false, final false
inline void DefaultOutput(::StringW  line) ;

/// @brief Method EndFrame, addr 0xb13c970, size 0xbc, virtual false, abstract: false, final false
inline void EndFrame() ;

static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* New_ctor() ;

/// @brief Method PrintImmediate, addr 0xb13ca2c, size 0xbc, virtual false, abstract: false, final false
inline void PrintImmediate() ;

/// @brief Method SetShaderDebugPrintBindings, addr 0xb13b91c, size 0x138, virtual false, abstract: false, final false
inline void SetShaderDebugPrintBindings(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method SetShaderDebugPrintInputConstants, addr 0xb13b854, size 0xc8, virtual false, abstract: false, final false
inline void SetShaderDebugPrintInputConstants(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ShaderDebugPrintInput  input) ;

constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& __cordl_internal_get_m_BufferReadCompleteAction() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& __cordl_internal_get_m_BufferReadCompleteAction() ;

constexpr bool const& __cordl_internal_get_m_FrameCleared() const;

constexpr bool& __cordl_internal_get_m_FrameCleared() ;

constexpr int32_t const& __cordl_internal_get_m_FrameCounter() const;

constexpr int32_t& __cordl_internal_get_m_FrameCounter() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_m_OutputAction() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_m_OutputAction() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* const& __cordl_internal_get_m_OutputBuffers() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*& __cordl_internal_get_m_OutputBuffers() ;

constexpr ::StringW const& __cordl_internal_get_m_OutputLine() const;

constexpr ::StringW& __cordl_internal_get_m_OutputLine() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& __cordl_internal_get_m_ReadbackRequests() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& __cordl_internal_get_m_ReadbackRequests() ;

constexpr void __cordl_internal_set_m_BufferReadCompleteAction(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  value) ;

constexpr void __cordl_internal_set_m_FrameCleared(bool  value) ;

constexpr void __cordl_internal_set_m_FrameCounter(int32_t  value) ;

constexpr void __cordl_internal_set_m_OutputAction(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_m_OutputBuffers(::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*  value) ;

constexpr void __cordl_internal_set_m_OutputLine(::StringW  value) ;

constexpr void __cordl_internal_set_m_ReadbackRequests(::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  value) ;

/// @brief Method .ctor, addr 0xb13b510, size 0x2ec, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_m_ShaderPropertyIDInputFrame() ;

static inline int32_t getStaticF_m_ShaderPropertyIDInputMouse() ;

static inline int32_t getStaticF_m_shaderDebugOutputData() ;

static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* getStaticF_s_Instance() ;

/// @brief Method get_instance, addr 0xb13b7fc, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShaderDebugPrintManager* get_instance() ;

/// @brief Method get_outputLine, addr 0xb13cae8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_outputLine() ;

static inline void setStaticF_m_ShaderPropertyIDInputFrame(int32_t  value) ;

static inline void setStaticF_m_ShaderPropertyIDInputMouse(int32_t  value) ;

static inline void setStaticF_m_shaderDebugOutputData(int32_t  value) ;

static inline void setStaticF_s_Instance(::UnityEngine::Rendering::ShaderDebugPrintManager*  value) ;

/// @brief Method set_outputAction, addr 0xb13caf0, size 0x8, virtual false, abstract: false, final false
inline void set_outputAction(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderDebugPrintManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderDebugPrintManager(ShaderDebugPrintManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderDebugPrintManager(ShaderDebugPrintManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16775};

/// @brief Field k_FramesInFlight offset 0xffffffff size 0x4
static constexpr int32_t  k_FramesInFlight{static_cast<int32_t>(0x4)};

/// @brief Field k_MaxBufferElements offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxBufferElements{static_cast<int32_t>(0x4000)};

/// @brief Field k_TypeHasTag offset 0xffffffff size 0x4
static constexpr uint32_t  k_TypeHasTag{static_cast<uint32_t>(0x80u)};

/// @brief Field m_OutputBuffers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*  ___m_OutputBuffers;

/// @brief Field m_ReadbackRequests, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  ___m_ReadbackRequests;

/// @brief Field m_BufferReadCompleteAction, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  ___m_BufferReadCompleteAction;

/// @brief Field m_FrameCounter, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_FrameCounter;

/// @brief Field m_FrameCleared, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_FrameCleared;

/// @brief Field m_OutputLine, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_OutputLine;

/// @brief Field m_OutputAction, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___m_OutputAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_ReadbackRequests) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_BufferReadCompleteAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_FrameCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_FrameCleared) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputLine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderDebugPrintManager, ___m_OutputAction) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShaderDebugPrintManager) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderDebugPrintManager/Profiling
class CORDL_TYPE ShaderDebugPrintManager_Profiling : public ::System::Object {
public:
// Declarations
/// @brief Field BufferReadComplete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BufferReadComplete, put=setStaticF_BufferReadComplete)) ::UnityEngine::Rendering::ProfilingSampler*  BufferReadComplete;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_BufferReadComplete() ;

static inline void setStaticF_BufferReadComplete(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderDebugPrintManager_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager_Profiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderDebugPrintManager_Profiling(ShaderDebugPrintManager_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderDebugPrintManager_Profiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderDebugPrintManager_Profiling(ShaderDebugPrintManager_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
