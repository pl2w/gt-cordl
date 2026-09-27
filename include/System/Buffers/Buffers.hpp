#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Buffers/ArrayBufferWriter_1.hpp"
#include "System/Buffers/ArrayMemoryPool_1.hpp"
#include "System/Buffers/ArrayPoolEventSource.hpp"
#include "System/Buffers/ArrayPoolEventSource_BufferAllocatedReason.hpp"
#include "System/Buffers/ArrayPool_1.hpp"
#include "System/Buffers/BuffersExtensions.hpp"
#include "System/Buffers/IBufferWriter_1.hpp"
#include "System/Buffers/IMemoryOwner_1.hpp"
#include "System/Buffers/IPinnable.hpp"
#include "System/Buffers/MemoryHandle.hpp"
#include "System/Buffers/MemoryManager_1.hpp"
#include "System/Buffers/MemoryPool_1.hpp"
#include "System/Buffers/ReadOnlySequence.hpp"
#include "System/Buffers/ReadOnlySequenceDebugView_1.hpp"
#include "System/Buffers/ReadOnlySequenceSegment_1.hpp"
#include "System/Buffers/ReadOnlySequence_1.hpp"
#include "System/Buffers/ReadOnlySequence`1_SequenceType.hpp"
#include "System/Buffers/SequenceReader_1.hpp"
#include "System/Buffers/SpanAction_2.hpp"
#include "System/Buffers/StandardFormat.hpp"
#include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool_1.hpp"
#include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool`1_MemoryPressure.hpp"
#include "System/Buffers/Utilities.hpp"
#ifdef __cpp_modules
                    export module Buffers;
                    #endif
                
