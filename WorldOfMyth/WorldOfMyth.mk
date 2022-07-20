##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=WorldOfMyth
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Users/Grproth/Documents/TextGameWorkspace
ProjectPath            :=/Users/Grproth/Documents/TextGameWorkspace/WorldOfMyth
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mars Lee Falcon
Date                   :=21/07/2022
CodeLitePath           :="/Users/Grproth/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="WorldOfMyth.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++20 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Spawn.cpp$(ObjectSuffix) $(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ItemSlotList.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Spawn.cpp$(ObjectSuffix): Spawn.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Spawn.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Spawn.cpp$(DependSuffix) -MM Spawn.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Grproth/Documents/TextGameWorkspace/WorldOfMyth/Spawn.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Spawn.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Spawn.cpp$(PreprocessSuffix): Spawn.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Spawn.cpp$(PreprocessSuffix) Spawn.cpp

$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix): Inventory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Inventory.cpp$(DependSuffix) -MM Inventory.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Grproth/Documents/TextGameWorkspace/WorldOfMyth/Inventory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Inventory.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix): Inventory.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Inventory.cpp$(PreprocessSuffix) Inventory.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Grproth/Documents/TextGameWorkspace/WorldOfMyth/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/ItemSlotList.cpp$(ObjectSuffix): ItemSlotList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ItemSlotList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ItemSlotList.cpp$(DependSuffix) -MM ItemSlotList.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/Grproth/Documents/TextGameWorkspace/WorldOfMyth/ItemSlotList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ItemSlotList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ItemSlotList.cpp$(PreprocessSuffix): ItemSlotList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ItemSlotList.cpp$(PreprocessSuffix) ItemSlotList.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


